/****************************************************************************
** Meta object code from reading C++ file 'main_interface.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/main_interface.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainInterface_t {
    QByteArrayData data[67];
    char stringdata0[991];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainInterface_t qt_meta_stringdata_MainInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainInterface"
QT_MOC_LITERAL(1, 14, 11), // "askGetVideo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "vout_window_t*"
QT_MOC_LITERAL(4, 42, 5), // "bool*"
QT_MOC_LITERAL(5, 48, 15), // "askReleaseVideo"
QT_MOC_LITERAL(6, 64, 16), // "askVideoToResize"
QT_MOC_LITERAL(7, 81, 21), // "askVideoSetFullScreen"
QT_MOC_LITERAL(8, 103, 12), // "askHideMouse"
QT_MOC_LITERAL(9, 116, 13), // "askVideoOnTop"
QT_MOC_LITERAL(10, 130, 18), // "minimalViewToggled"
QT_MOC_LITERAL(11, 149, 26), // "fullscreenInterfaceToggled"
QT_MOC_LITERAL(12, 176, 9), // "askToQuit"
QT_MOC_LITERAL(13, 186, 7), // "askBoss"
QT_MOC_LITERAL(14, 194, 8), // "askRaise"
QT_MOC_LITERAL(15, 203, 10), // "kc_pressed"
QT_MOC_LITERAL(16, 214, 12), // "dockPlaylist"
QT_MOC_LITERAL(17, 227, 8), // "b_docked"
QT_MOC_LITERAL(18, 236, 17), // "toggleMinimalView"
QT_MOC_LITERAL(19, 254, 14), // "togglePlaylist"
QT_MOC_LITERAL(20, 269, 23), // "toggleUpdateSystrayMenu"
QT_MOC_LITERAL(21, 293, 21), // "showUpdateSystrayMenu"
QT_MOC_LITERAL(22, 315, 21), // "hideUpdateSystrayMenu"
QT_MOC_LITERAL(23, 337, 21), // "toggleAdvancedButtons"
QT_MOC_LITERAL(24, 359, 25), // "toggleInterfaceFullScreen"
QT_MOC_LITERAL(25, 385, 9), // "toggleFSC"
QT_MOC_LITERAL(26, 395, 23), // "setInterfaceAlwaysOnTop"
QT_MOC_LITERAL(27, 419, 22), // "setStatusBarVisibility"
QT_MOC_LITERAL(28, 442, 9), // "b_visible"
QT_MOC_LITERAL(29, 452, 21), // "setPlaylistVisibility"
QT_MOC_LITERAL(30, 474, 12), // "getVideoSlot"
QT_MOC_LITERAL(31, 487, 7), // "i_width"
QT_MOC_LITERAL(32, 495, 8), // "i_height"
QT_MOC_LITERAL(33, 504, 16), // "releaseVideoSlot"
QT_MOC_LITERAL(34, 521, 8), // "emitBoss"
QT_MOC_LITERAL(35, 530, 9), // "emitRaise"
QT_MOC_LITERAL(36, 540, 11), // "reloadPrefs"
QT_MOC_LITERAL(37, 552, 18), // "toolBarConfUpdated"
QT_MOC_LITERAL(38, 571, 5), // "debug"
QT_MOC_LITERAL(39, 577, 16), // "recreateToolbars"
QT_MOC_LITERAL(40, 594, 7), // "setName"
QT_MOC_LITERAL(41, 602, 18), // "setVLCWindowsTitle"
QT_MOC_LITERAL(42, 621, 5), // "title"
QT_MOC_LITERAL(43, 627, 18), // "handleSystrayClick"
QT_MOC_LITERAL(44, 646, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(45, 680, 24), // "updateSystrayTooltipName"
QT_MOC_LITERAL(46, 705, 26), // "updateSystrayTooltipStatus"
QT_MOC_LITERAL(47, 732, 16), // "showCryptedLabel"
QT_MOC_LITERAL(48, 749, 14), // "handleKeyPress"
QT_MOC_LITERAL(49, 764, 10), // "QKeyEvent*"
QT_MOC_LITERAL(50, 775, 13), // "showBuffering"
QT_MOC_LITERAL(51, 789, 11), // "resizeStack"
QT_MOC_LITERAL(52, 801, 1), // "w"
QT_MOC_LITERAL(53, 803, 1), // "h"
QT_MOC_LITERAL(54, 805, 12), // "setVideoSize"
QT_MOC_LITERAL(55, 818, 16), // "videoSizeChanged"
QT_MOC_LITERAL(56, 835, 18), // "setVideoFullScreen"
QT_MOC_LITERAL(57, 854, 12), // "setHideMouse"
QT_MOC_LITERAL(58, 867, 13), // "setVideoOnTop"
QT_MOC_LITERAL(59, 881, 7), // "setBoss"
QT_MOC_LITERAL(60, 889, 8), // "setRaise"
QT_MOC_LITERAL(61, 898, 22), // "voutReleaseMouseEvents"
QT_MOC_LITERAL(62, 921, 15), // "showResumePanel"
QT_MOC_LITERAL(63, 937, 7), // "int64_t"
QT_MOC_LITERAL(64, 945, 15), // "hideResumePanel"
QT_MOC_LITERAL(65, 961, 14), // "resumePlayback"
QT_MOC_LITERAL(66, 976, 14) // "onInputChanged"

    },
    "MainInterface\0askGetVideo\0\0vout_window_t*\0"
    "bool*\0askReleaseVideo\0askVideoToResize\0"
    "askVideoSetFullScreen\0askHideMouse\0"
    "askVideoOnTop\0minimalViewToggled\0"
    "fullscreenInterfaceToggled\0askToQuit\0"
    "askBoss\0askRaise\0kc_pressed\0dockPlaylist\0"
    "b_docked\0toggleMinimalView\0togglePlaylist\0"
    "toggleUpdateSystrayMenu\0showUpdateSystrayMenu\0"
    "hideUpdateSystrayMenu\0toggleAdvancedButtons\0"
    "toggleInterfaceFullScreen\0toggleFSC\0"
    "setInterfaceAlwaysOnTop\0setStatusBarVisibility\0"
    "b_visible\0setPlaylistVisibility\0"
    "getVideoSlot\0i_width\0i_height\0"
    "releaseVideoSlot\0emitBoss\0emitRaise\0"
    "reloadPrefs\0toolBarConfUpdated\0debug\0"
    "recreateToolbars\0setName\0setVLCWindowsTitle\0"
    "title\0handleSystrayClick\0"
    "QSystemTrayIcon::ActivationReason\0"
    "updateSystrayTooltipName\0"
    "updateSystrayTooltipStatus\0showCryptedLabel\0"
    "handleKeyPress\0QKeyEvent*\0showBuffering\0"
    "resizeStack\0w\0h\0setVideoSize\0"
    "videoSizeChanged\0setVideoFullScreen\0"
    "setHideMouse\0setVideoOnTop\0setBoss\0"
    "setRaise\0voutReleaseMouseEvents\0"
    "showResumePanel\0int64_t\0hideResumePanel\0"
    "resumePlayback\0onInputChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  289,    2, 0x06 /* Public */,
       5,    0,  300,    2, 0x06 /* Public */,
       6,    2,  301,    2, 0x06 /* Public */,
       7,    1,  306,    2, 0x06 /* Public */,
       8,    1,  309,    2, 0x06 /* Public */,
       9,    1,  312,    2, 0x06 /* Public */,
      10,    1,  315,    2, 0x06 /* Public */,
      11,    1,  318,    2, 0x06 /* Public */,
      12,    0,  321,    2, 0x06 /* Public */,
      13,    0,  322,    2, 0x06 /* Public */,
      14,    0,  323,    2, 0x06 /* Public */,
      15,    0,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  325,    2, 0x0a /* Public */,
      16,    0,  328,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  329,    2, 0x0a /* Public */,
      19,    0,  332,    2, 0x0a /* Public */,
      20,    0,  333,    2, 0x0a /* Public */,
      21,    0,  334,    2, 0x0a /* Public */,
      22,    0,  335,    2, 0x0a /* Public */,
      23,    0,  336,    2, 0x0a /* Public */,
      24,    0,  337,    2, 0x0a /* Public */,
      25,    0,  338,    2, 0x0a /* Public */,
      26,    1,  339,    2, 0x0a /* Public */,
      27,    1,  342,    2, 0x0a /* Public */,
      29,    1,  345,    2, 0x0a /* Public */,
      30,    5,  348,    2, 0x0a /* Public */,
      33,    0,  359,    2, 0x0a /* Public */,
      34,    0,  360,    2, 0x0a /* Public */,
      35,    0,  361,    2, 0x0a /* Public */,
      36,    0,  362,    2, 0x0a /* Public */,
      37,    0,  363,    2, 0x0a /* Public */,
      38,    0,  364,    2, 0x09 /* Protected */,
      39,    0,  365,    2, 0x09 /* Protected */,
      40,    1,  366,    2, 0x09 /* Protected */,
      41,    1,  369,    2, 0x09 /* Protected */,
      41,    0,  372,    2, 0x29 /* Protected | MethodCloned */,
      43,    1,  373,    2, 0x09 /* Protected */,
      45,    1,  376,    2, 0x09 /* Protected */,
      46,    1,  379,    2, 0x09 /* Protected */,
      47,    1,  382,    2, 0x09 /* Protected */,
      48,    1,  385,    2, 0x09 /* Protected */,
      50,    1,  388,    2, 0x09 /* Protected */,
      51,    2,  391,    2, 0x09 /* Protected */,
      54,    2,  396,    2, 0x09 /* Protected */,
      55,    2,  401,    2, 0x09 /* Protected */,
      56,    1,  406,    2, 0x09 /* Protected */,
      57,    1,  409,    2, 0x09 /* Protected */,
      58,    1,  412,    2, 0x09 /* Protected */,
      59,    0,  415,    2, 0x09 /* Protected */,
      60,    0,  416,    2, 0x09 /* Protected */,
      61,    0,  417,    2, 0x09 /* Protected */,
      62,    1,  418,    2, 0x09 /* Protected */,
      64,    0,  421,    2, 0x09 /* Protected */,
      65,    0,  422,    2, 0x09 /* Protected */,
      66,    1,  423,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, 0x80000000 | 4,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, 0x80000000 | 4,    2,   31,   32,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   52,   53,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainInterface *_t = static_cast<MainInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->askGetVideo((*reinterpret_cast< vout_window_t*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5]))); break;
        case 1: _t->askReleaseVideo(); break;
        case 2: _t->askVideoToResize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->askVideoSetFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->askHideMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->askVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->minimalViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fullscreenInterfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->askToQuit(); break;
        case 9: _t->askBoss(); break;
        case 10: _t->askRaise(); break;
        case 11: _t->kc_pressed(); break;
        case 12: _t->dockPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->dockPlaylist(); break;
        case 14: _t->toggleMinimalView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->togglePlaylist(); break;
        case 16: _t->toggleUpdateSystrayMenu(); break;
        case 17: _t->showUpdateSystrayMenu(); break;
        case 18: _t->hideUpdateSystrayMenu(); break;
        case 19: _t->toggleAdvancedButtons(); break;
        case 20: _t->toggleInterfaceFullScreen(); break;
        case 21: _t->toggleFSC(); break;
        case 22: _t->setInterfaceAlwaysOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setStatusBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setPlaylistVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->getVideoSlot((*reinterpret_cast< vout_window_t*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5]))); break;
        case 26: _t->releaseVideoSlot(); break;
        case 27: _t->emitBoss(); break;
        case 28: _t->emitRaise(); break;
        case 29: _t->reloadPrefs(); break;
        case 30: _t->toolBarConfUpdated(); break;
        case 31: _t->debug(); break;
        case 32: _t->recreateToolbars(); break;
        case 33: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->setVLCWindowsTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->setVLCWindowsTitle(); break;
        case 36: _t->handleSystrayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 37: _t->updateSystrayTooltipName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->updateSystrayTooltipStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->showCryptedLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->handleKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 41: _t->showBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->resizeStack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setVideoSize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 44: _t->videoSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setVideoFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setHideMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->setBoss(); break;
        case 49: _t->setRaise(); break;
        case 50: _t->voutReleaseMouseEvents(); break;
        case 51: _t->showResumePanel((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 52: _t->hideResumePanel(); break;
        case 53: _t->resumePlayback(); break;
        case 54: _t->onInputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainInterface::*_t)(vout_window_t * , unsigned  , unsigned  , bool , bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askGetVideo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askReleaseVideo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoToResize)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoSetFullScreen)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askHideMouse)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askVideoOnTop)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::minimalViewToggled)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::fullscreenInterfaceToggled)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askToQuit)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askBoss)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::askRaise)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::kc_pressed)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject MainInterface::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_MainInterface.data,
      qt_meta_data_MainInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface.stringdata0))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::askGetVideo(vout_window_t * _t1, unsigned  _t2, unsigned  _t3, bool _t4, bool * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInterface::askReleaseVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainInterface::askVideoToResize(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainInterface::askVideoSetFullScreen(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInterface::askHideMouse(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInterface::askVideoOnTop(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInterface::minimalViewToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainInterface::fullscreenInterfaceToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainInterface::askToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MainInterface::askBoss()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void MainInterface::askRaise()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void MainInterface::kc_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
