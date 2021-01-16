/****************************************************************************
** Meta object code from reading C++ file 'preferences_widgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/preferences_widgets.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InterfacePreviewWidget_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfacePreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfacePreviewWidget_t qt_meta_stringdata_InterfacePreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "InterfacePreviewWidget"
QT_MOC_LITERAL(1, 23, 10), // "setPreview"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "enum_style"
QT_MOC_LITERAL(4, 46, 16), // "setNormalPreview"
QT_MOC_LITERAL(5, 63, 9) // "b_minimal"

    },
    "InterfacePreviewWidget\0setPreview\0\0"
    "enum_style\0setNormalPreview\0b_minimal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfacePreviewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void InterfacePreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfacePreviewWidget *_t = static_cast<InterfacePreviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPreview((*reinterpret_cast< enum_style(*)>(_a[1]))); break;
        case 1: _t->setNormalPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject InterfacePreviewWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_InterfacePreviewWidget.data,
      qt_meta_data_InterfacePreviewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InterfacePreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfacePreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InterfacePreviewWidget.stringdata0))
        return static_cast<void*>(const_cast< InterfacePreviewWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int InterfacePreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigControl_t qt_meta_stringdata_ConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConfigControl"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "ConfigControl\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfigControl *_t = static_cast<ConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConfigControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConfigControl::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ConfigControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConfigControl.data,
      qt_meta_data_ConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigControl.stringdata0))
        return static_cast<void*>(const_cast< ConfigControl*>(this));
    return QObject::qt_metacast(_clname);
}

int ConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ConfigControl::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_VIntConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VIntConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VIntConfigControl_t qt_meta_stringdata_VIntConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 17) // "VIntConfigControl"

    },
    "VIntConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VIntConfigControl[] = {

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

void VIntConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VIntConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VIntConfigControl.data,
      qt_meta_data_VIntConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VIntConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VIntConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VIntConfigControl.stringdata0))
        return static_cast<void*>(const_cast< VIntConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VIntConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_IntegerConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntegerConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntegerConfigControl_t qt_meta_stringdata_IntegerConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 20) // "IntegerConfigControl"

    },
    "IntegerConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntegerConfigControl[] = {

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

void IntegerConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject IntegerConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerConfigControl.data,
      qt_meta_data_IntegerConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IntegerConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerConfigControl.stringdata0))
        return static_cast<void*>(const_cast< IntegerConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_IntegerRangeConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntegerRangeConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntegerRangeConfigControl_t qt_meta_stringdata_IntegerRangeConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 25) // "IntegerRangeConfigControl"

    },
    "IntegerRangeConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntegerRangeConfigControl[] = {

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

void IntegerRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject IntegerRangeConfigControl::staticMetaObject = {
    { &IntegerConfigControl::staticMetaObject, qt_meta_stringdata_IntegerRangeConfigControl.data,
      qt_meta_data_IntegerRangeConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IntegerRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerRangeConfigControl.stringdata0))
        return static_cast<void*>(const_cast< IntegerRangeConfigControl*>(this));
    return IntegerConfigControl::qt_metacast(_clname);
}

int IntegerRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IntegerConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_IntegerRangeSliderConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntegerRangeSliderConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntegerRangeSliderConfigControl_t qt_meta_stringdata_IntegerRangeSliderConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 31) // "IntegerRangeSliderConfigControl"

    },
    "IntegerRangeSliderConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntegerRangeSliderConfigControl[] = {

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

void IntegerRangeSliderConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject IntegerRangeSliderConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerRangeSliderConfigControl.data,
      qt_meta_data_IntegerRangeSliderConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IntegerRangeSliderConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerRangeSliderConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerRangeSliderConfigControl.stringdata0))
        return static_cast<void*>(const_cast< IntegerRangeSliderConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerRangeSliderConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_IntegerListConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntegerListConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntegerListConfigControl_t qt_meta_stringdata_IntegerListConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 24) // "IntegerListConfigControl"

    },
    "IntegerListConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntegerListConfigControl[] = {

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

void IntegerListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject IntegerListConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_IntegerListConfigControl.data,
      qt_meta_data_IntegerListConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IntegerListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntegerListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IntegerListConfigControl.stringdata0))
        return static_cast<void*>(const_cast< IntegerListConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int IntegerListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_BoolConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolConfigControl_t qt_meta_stringdata_BoolConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 17) // "BoolConfigControl"

    },
    "BoolConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolConfigControl[] = {

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

void BoolConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BoolConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_BoolConfigControl.data,
      qt_meta_data_BoolConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoolConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoolConfigControl.stringdata0))
        return static_cast<void*>(const_cast< BoolConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int BoolConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ColorConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorConfigControl_t qt_meta_stringdata_ColorConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ColorConfigControl"
QT_MOC_LITERAL(1, 19, 11), // "selectColor"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "ColorConfigControl\0selectColor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ColorConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorConfigControl *_t = static_cast<ColorConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ColorConfigControl::staticMetaObject = {
    { &VIntConfigControl::staticMetaObject, qt_meta_stringdata_ColorConfigControl.data,
      qt_meta_data_ColorConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorConfigControl.stringdata0))
        return static_cast<void*>(const_cast< ColorConfigControl*>(this));
    return VIntConfigControl::qt_metacast(_clname);
}

int ColorConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VIntConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_VFloatConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VFloatConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VFloatConfigControl_t qt_meta_stringdata_VFloatConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 19) // "VFloatConfigControl"

    },
    "VFloatConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VFloatConfigControl[] = {

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

void VFloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VFloatConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VFloatConfigControl.data,
      qt_meta_data_VFloatConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VFloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VFloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VFloatConfigControl.stringdata0))
        return static_cast<void*>(const_cast< VFloatConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VFloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FloatConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatConfigControl_t qt_meta_stringdata_FloatConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 18) // "FloatConfigControl"

    },
    "FloatConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatConfigControl[] = {

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

void FloatConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FloatConfigControl::staticMetaObject = {
    { &VFloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatConfigControl.data,
      qt_meta_data_FloatConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FloatConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FloatConfigControl.stringdata0))
        return static_cast<void*>(const_cast< FloatConfigControl*>(this));
    return VFloatConfigControl::qt_metacast(_clname);
}

int FloatConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VFloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FloatRangeConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatRangeConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatRangeConfigControl_t qt_meta_stringdata_FloatRangeConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 23) // "FloatRangeConfigControl"

    },
    "FloatRangeConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatRangeConfigControl[] = {

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

void FloatRangeConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FloatRangeConfigControl::staticMetaObject = {
    { &FloatConfigControl::staticMetaObject, qt_meta_stringdata_FloatRangeConfigControl.data,
      qt_meta_data_FloatRangeConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FloatRangeConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatRangeConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FloatRangeConfigControl.stringdata0))
        return static_cast<void*>(const_cast< FloatRangeConfigControl*>(this));
    return FloatConfigControl::qt_metacast(_clname);
}

int FloatRangeConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FloatConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_VStringConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VStringConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VStringConfigControl_t qt_meta_stringdata_VStringConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 20) // "VStringConfigControl"

    },
    "VStringConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VStringConfigControl[] = {

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

void VStringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VStringConfigControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_VStringConfigControl.data,
      qt_meta_data_VStringConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VStringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VStringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VStringConfigControl.stringdata0))
        return static_cast<void*>(const_cast< VStringConfigControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int VStringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_StringConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringConfigControl_t qt_meta_stringdata_StringConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 19) // "StringConfigControl"

    },
    "StringConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringConfigControl[] = {

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

void StringConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StringConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringConfigControl.data,
      qt_meta_data_StringConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StringConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StringConfigControl.stringdata0))
        return static_cast<void*>(const_cast< StringConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FileConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileConfigControl_t qt_meta_stringdata_FileConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FileConfigControl"
QT_MOC_LITERAL(1, 18, 11), // "updateField"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "FileConfigControl\0updateField\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FileConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileConfigControl *_t = static_cast<FileConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FileConfigControl.data,
      qt_meta_data_FileConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileConfigControl.stringdata0))
        return static_cast<void*>(const_cast< FileConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FileConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DirectoryConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectoryConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectoryConfigControl_t qt_meta_stringdata_DirectoryConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DirectoryConfigControl"
QT_MOC_LITERAL(1, 23, 11), // "updateField"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "DirectoryConfigControl\0updateField\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectoryConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DirectoryConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectoryConfigControl *_t = static_cast<DirectoryConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateField(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DirectoryConfigControl::staticMetaObject = {
    { &FileConfigControl::staticMetaObject, qt_meta_stringdata_DirectoryConfigControl.data,
      qt_meta_data_DirectoryConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DirectoryConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectoryConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DirectoryConfigControl.stringdata0))
        return static_cast<void*>(const_cast< DirectoryConfigControl*>(this));
    return FileConfigControl::qt_metacast(_clname);
}

int DirectoryConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_FontConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FontConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FontConfigControl_t qt_meta_stringdata_FontConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 17) // "FontConfigControl"

    },
    "FontConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FontConfigControl[] = {

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

void FontConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FontConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_FontConfigControl.data,
      qt_meta_data_FontConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FontConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FontConfigControl.stringdata0))
        return static_cast<void*>(const_cast< FontConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int FontConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModuleConfigControl_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleConfigControl_t qt_meta_stringdata_ModuleConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ModuleConfigControl"

    },
    "ModuleConfigControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleConfigControl[] = {

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

void ModuleConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModuleConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_ModuleConfigControl.data,
      qt_meta_data_ModuleConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModuleConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleConfigControl.stringdata0))
        return static_cast<void*>(const_cast< ModuleConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ModuleListConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleListConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleListConfigControl_t qt_meta_stringdata_ModuleListConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ModuleListConfigControl"
QT_MOC_LITERAL(1, 24, 8), // "onUpdate"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "ModuleListConfigControl\0onUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleListConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ModuleListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleListConfigControl *_t = static_cast<ModuleListConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModuleListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_ModuleListConfigControl.data,
      qt_meta_data_ModuleListConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModuleListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleListConfigControl.stringdata0))
        return static_cast<void*>(const_cast< ModuleListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int ModuleListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_StringListConfigControl_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StringListConfigControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StringListConfigControl_t qt_meta_stringdata_StringListConfigControl = {
    {
QT_MOC_LITERAL(0, 0, 23), // "StringListConfigControl"
QT_MOC_LITERAL(1, 24, 17), // "comboIndexChanged"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "StringListConfigControl\0comboIndexChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StringListConfigControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void StringListConfigControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringListConfigControl *_t = static_cast<StringListConfigControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comboIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StringListConfigControl::staticMetaObject = {
    { &VStringConfigControl::staticMetaObject, qt_meta_stringdata_StringListConfigControl.data,
      qt_meta_data_StringListConfigControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StringListConfigControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StringListConfigControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StringListConfigControl.stringdata0))
        return static_cast<void*>(const_cast< StringListConfigControl*>(this));
    return VStringConfigControl::qt_metacast(_clname);
}

int StringListConfigControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VStringConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_KeySelectorControl_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeySelectorControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeySelectorControl_t qt_meta_stringdata_KeySelectorControl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KeySelectorControl"
QT_MOC_LITERAL(1, 19, 9), // "selectKey"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 47, 6), // "column"
QT_MOC_LITERAL(5, 54, 6) // "filter"

    },
    "KeySelectorControl\0selectKey\0\0"
    "QTreeWidgetItem*\0column\0filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeySelectorControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       1,    1,   39,    2, 0x28 /* Private | MethodCloned */,
       1,    0,   42,    2, 0x28 /* Private | MethodCloned */,
       5,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    4,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void KeySelectorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeySelectorControl *_t = static_cast<KeySelectorControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->selectKey(); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject KeySelectorControl::staticMetaObject = {
    { &ConfigControl::staticMetaObject, qt_meta_stringdata_KeySelectorControl.data,
      qt_meta_data_KeySelectorControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeySelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeySelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeySelectorControl.stringdata0))
        return static_cast<void*>(const_cast< KeySelectorControl*>(this));
    return ConfigControl::qt_metacast(_clname);
}

int KeySelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_KeyInputDialog_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyInputDialog_t qt_meta_stringdata_KeyInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KeyInputDialog"
QT_MOC_LITERAL(1, 15, 11), // "unsetAction"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "KeyInputDialog\0unsetAction\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KeyInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyInputDialog *_t = static_cast<KeyInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unsetAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KeyInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KeyInputDialog.data,
      qt_meta_data_KeyInputDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyInputDialog.stringdata0))
        return static_cast<void*>(const_cast< KeyInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int KeyInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
