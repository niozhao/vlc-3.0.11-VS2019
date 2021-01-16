/*****************************************************************************
 * sensors.cpp: Windows sensor handling
 *****************************************************************************
 * Copyright © 2017 Steve Lhomme
 * Copyright © 2017 VideoLabs
 *
 * Authors: Steve Lhomme <robux4@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_vout_wrapper.h>
#include "events.h"

#include <initguid.h>
#include <propsys.h> /* stupid mingw headers don't include this */
#include <sensors.h>
#include <sensorsapi.h>

#include <new>

#ifndef _MSC_VER
DEFINE_PROPERTYKEY(SENSOR_DATA_TYPE_MAGNETOMETER_ACCURACY, 0x1637d8a2, 0x4248, 0x4275, 0x86, 0x5d, 0x55, 0x8d, 0xe8, 0x4a, 0xed, 0xfd, 22);
#endif

DEFINE_GUID(IID_ISensorManager, 0xBD77DB67, 0x45A8, 0x42DC, 0x8D, 0x00, 0x6D, 0xCF, 0x15, 0xF8, 0x37, 0x7A);
DEFINE_GUID(CLSID_SensorManager, 0x77a1c827, 0xfcd2, 0x4689, 0x89, 0x15, 0x9d, 0x61, 0x3c, 0xc5, 0xfa, 0x3e);

class SensorReceiver : public ISensorEvents
{
public:
    SensorReceiver(vout_display_t *vd, const vlc_viewpoint_t & init_viewpoint)
        :vd(vd)
        ,current_pos(init_viewpoint)
    {}

    virtual ~SensorReceiver()
    {}

    STDMETHODIMP QueryInterface(REFIID iid, void** ppv)
    {
        if (ppv == NULL)
        {
            return E_POINTER;
        }
        if (iid == __uuidof(IUnknown))
        {
            *ppv = static_cast<IUnknown*>(this);
        }
        else if (iid == __uuidof(ISensorEvents))
        {
            *ppv = static_cast<ISensorEvents*>(this);
        }
        else
        {
            *ppv = NULL;
            return E_NOINTERFACE;
        }
        AddRef();
        return S_OK;
    }

    STDMETHODIMP_(ULONG) AddRef()
    {
        return InterlockedIncrement(&m_cRef);
    }

    STDMETHODIMP_(ULONG) Release()
    {
        ULONG count = InterlockedDecrement(&m_cRef);
        if (count == 0)
        {
            delete this;
            return 0;
        }
        return count;
    }

    HRESULT STDMETHODCALLTYPE OnStateChanged(ISensor *pSensor, SensorState state)
    {
        (void)pSensor;
        (void)state;
        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE OnDataUpdated(ISensor *pSensor, ISensorDataReport *pNewData)
    {
        (void)pSensor;
        vlc_viewpoint_t old_pos = current_pos;
        HRESULT hr;
        PROPVARIANT pvRot;

        PropVariantInit(&pvRot);
        hr = pNewData->GetSensorValue(SENSOR_DATA_TYPE_TILT_X_DEGREES, &pvRot);
        if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
        {
            current_pos.pitch = pvRot.fltVal;
            PropVariantClear(&pvRot);
        }
        hr = pNewData->GetSensorValue(SENSOR_DATA_TYPE_TILT_Y_DEGREES, &pvRot);
        if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
        {
            current_pos.roll = pvRot.fltVal;
            PropVariantClear(&pvRot);
        }
        hr = pNewData->GetSensorValue(SENSOR_DATA_TYPE_TILT_Z_DEGREES, &pvRot);
        if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
        {
            current_pos.yaw = pvRot.fltVal;
            PropVariantClear(&pvRot);
        }

        vlc_viewpoint_t vp = {
            old_pos.yaw   - current_pos.yaw,
            old_pos.pitch - current_pos.pitch,
            old_pos.roll  - current_pos.roll,
            0.0f
        };
        vout_display_SendEventViewpointMoved(vd, &vp);
        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE OnEvent(ISensor *pSensor, REFGUID eventID, IPortableDeviceValues *pEventData)
    {
        (void)pSensor;
        (void)eventID;
        (void)pEventData;
        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE OnLeave(REFSENSOR_ID ID)
    {
        (void)ID;
        return S_OK;
    }

private:
    vout_display_t *const vd;
    vlc_viewpoint_t current_pos;
    long m_cRef;
};

void *HookWindowsSensors(vout_display_t *vd, HWND hwnd)
{
    ISensor *pSensor = NULL;
    ISensorManager *pSensorManager;
    HRESULT hr = CoCreateInstance( CLSID_SensorManager,
                      NULL, CLSCTX_INPROC_SERVER,
                      IID_ISensorManager, (void**)&pSensorManager );
    if (SUCCEEDED(hr))
    {
        ISensorCollection *pInclinometers;
        hr = pSensorManager->GetSensorsByType(SENSOR_TYPE_INCLINOMETER_3D, &pInclinometers);
        if (SUCCEEDED(hr))
        {
            ULONG count;
            pInclinometers->GetCount(&count);
            msg_Dbg(vd, "Found %lu inclinometer", count);
            for (ULONG i=0; i<count; ++i)
            {
                hr = pInclinometers->GetAt(i, &pSensor);
                if (SUCCEEDED(hr))
                {
                    SensorState state = SENSOR_STATE_NOT_AVAILABLE;
                    hr = pSensor->GetState(&state);
                    if (SUCCEEDED(hr))
                    {
                        if (state == SENSOR_STATE_ACCESS_DENIED)
                            hr = pSensorManager->RequestPermissions(hwnd, pInclinometers, TRUE);

                        if (SUCCEEDED(hr))
                        {
                            vlc_viewpoint_t start_viewpoint;
                            vlc_viewpoint_init(&start_viewpoint);
                            PROPVARIANT pvRot;
                            PropVariantInit(&pvRot);
                            hr = pSensor->GetProperty(SENSOR_DATA_TYPE_TILT_X_DEGREES, &pvRot);
                            if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
                            {
                                start_viewpoint.pitch = pvRot.fltVal;
                                PropVariantClear(&pvRot);
                            }
                            hr = pSensor->GetProperty(SENSOR_DATA_TYPE_TILT_Y_DEGREES, &pvRot);
                            if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
                            {
                                start_viewpoint.roll = pvRot.fltVal;
                                PropVariantClear(&pvRot);
                            }
                            hr = pSensor->GetProperty(SENSOR_DATA_TYPE_TILT_Z_DEGREES, &pvRot);
                            if (SUCCEEDED(hr) && pvRot.vt == VT_R4)
                            {
                                start_viewpoint.yaw = pvRot.fltVal;
                                PropVariantClear(&pvRot);
                            }

                            SensorReceiver *received = new(std::nothrow) SensorReceiver(vd, start_viewpoint);
                            if (received)
                            {
                                pSensor->SetEventSink(received);
                                break;
                            }
                        }
                    }

                    pSensor->Release();
                    pSensor = NULL;
                }
            }
            pInclinometers->Release();
        }
        else
            msg_Dbg(vd, "inclinometer not found. (hr=0x%lX)", hr);
        pSensorManager->Release();
    }
    return pSensor;
}

void UnhookWindowsSensors(void *vSensor)
{
    if (!vSensor)
        return;

    ISensor *pSensor = static_cast<ISensor*>(vSensor);
    pSensor->SetEventSink(NULL);
    pSensor->Release();
}
