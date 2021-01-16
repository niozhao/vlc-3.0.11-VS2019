/****************************************************************************
** Meta object code from reading C++ file 'input_slider.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/util/input_slider.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_slider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SeekSlider_t {
    QByteArrayData data[15];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeekSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeekSlider_t qt_meta_stringdata_SeekSlider = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SeekSlider"
QT_MOC_LITERAL(1, 11, 13), // "sliderDragged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "setPosition"
QT_MOC_LITERAL(4, 38, 7), // "int64_t"
QT_MOC_LITERAL(5, 46, 11), // "setSeekable"
QT_MOC_LITERAL(6, 58, 1), // "b"
QT_MOC_LITERAL(7, 60, 15), // "updateBuffering"
QT_MOC_LITERAL(8, 76, 10), // "hideHandle"
QT_MOC_LITERAL(9, 87, 14), // "startSeekTimer"
QT_MOC_LITERAL(10, 102, 9), // "updatePos"
QT_MOC_LITERAL(11, 112, 12), // "inputUpdated"
QT_MOC_LITERAL(12, 125, 16), // "startAnimLoading"
QT_MOC_LITERAL(13, 142, 13), // "handleOpacity"
QT_MOC_LITERAL(14, 156, 15) // "loadingProperty"

    },
    "SeekSlider\0sliderDragged\0\0setPosition\0"
    "int64_t\0setSeekable\0b\0updateBuffering\0"
    "hideHandle\0startSeekTimer\0updatePos\0"
    "inputUpdated\0startAnimLoading\0"
    "handleOpacity\0loadingProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeekSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   62,    2, 0x0a /* Public */,
       5,    1,   69,    2, 0x0a /* Public */,
       7,    1,   72,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, 0x80000000 | 4, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QReal, 0x00095103,
      14, QMetaType::QReal, 0x00095003,

       0        // eod
};

void SeekSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeekSlider *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderDragged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setSeekable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->hideHandle(); break;
        case 5: _t->startSeekTimer(); break;
        case 6: _t->updatePos(); break;
        case 7: _t->inputUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->startAnimLoading(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SeekSlider::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SeekSlider::sliderDragged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SeekSlider *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->handleOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->loading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SeekSlider *_t = static_cast<SeekSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHandleOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setLoading(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SeekSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_SeekSlider.data,
      qt_meta_data_SeekSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SeekSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeekSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SeekSlider.stringdata0))
        return static_cast<void*>(const_cast< SeekSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int SeekSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SeekSlider::sliderDragged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SoundSlider_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundSlider_t qt_meta_stringdata_SoundSlider = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SoundSlider"

    },
    "SoundSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SoundSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SoundSlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_SoundSlider.data,
      qt_meta_data_SoundSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoundSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoundSlider.stringdata0))
        return static_cast<void*>(const_cast< SoundSlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int SoundSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
