/****************************************************************************
** Meta object code from reading C++ file 'variables.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/adapters/variables.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variables.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QVLCVariable_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCVariable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCVariable_t qt_meta_stringdata_QVLCVariable = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QVLCVariable"

    },
    "QVLCVariable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCVariable[] = {

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

void QVLCVariable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QVLCVariable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QVLCVariable.data,
      qt_meta_data_QVLCVariable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCVariable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCVariable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCVariable.stringdata0))
        return static_cast<void*>(const_cast< QVLCVariable*>(this));
    return QObject::qt_metacast(_clname);
}

int QVLCVariable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QVLCPointer_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCPointer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCPointer_t qt_meta_stringdata_QVLCPointer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QVLCPointer"
QT_MOC_LITERAL(1, 12, 14), // "pointerChanged"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "QVLCPointer\0pointerChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCPointer[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar,    2,

       0        // eod
};

void QVLCPointer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCPointer *_t = static_cast<QVLCPointer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointerChanged((*reinterpret_cast< void*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCPointer::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCPointer::pointerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QVLCPointer::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCPointer.data,
      qt_meta_data_QVLCPointer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCPointer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCPointer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCPointer.stringdata0))
        return static_cast<void*>(const_cast< QVLCPointer*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCPointer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
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
void QVLCPointer::pointerChanged(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVLCInteger_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCInteger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCInteger_t qt_meta_stringdata_QVLCInteger = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QVLCInteger"
QT_MOC_LITERAL(1, 12, 14), // "integerChanged"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "QVLCInteger\0integerChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCInteger[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void QVLCInteger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCInteger *_t = static_cast<QVLCInteger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->integerChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCInteger::*_t)(qlonglong );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCInteger::integerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QVLCInteger::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCInteger.data,
      qt_meta_data_QVLCInteger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCInteger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCInteger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCInteger.stringdata0))
        return static_cast<void*>(const_cast< QVLCInteger*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCInteger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
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
void QVLCInteger::integerChanged(qlonglong _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVLCBool_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCBool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCBool_t qt_meta_stringdata_QVLCBool = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QVLCBool"
QT_MOC_LITERAL(1, 9, 11), // "boolChanged"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "QVLCBool\0boolChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCBool[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void QVLCBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCBool *_t = static_cast<QVLCBool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boolChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCBool::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCBool::boolChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QVLCBool::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCBool.data,
      qt_meta_data_QVLCBool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCBool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCBool.stringdata0))
        return static_cast<void*>(const_cast< QVLCBool*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
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
void QVLCBool::boolChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVLCFloat_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCFloat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCFloat_t qt_meta_stringdata_QVLCFloat = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QVLCFloat"
QT_MOC_LITERAL(1, 10, 12), // "floatChanged"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "QVLCFloat\0floatChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCFloat[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void QVLCFloat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCFloat *_t = static_cast<QVLCFloat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->floatChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCFloat::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCFloat::floatChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QVLCFloat::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCFloat.data,
      qt_meta_data_QVLCFloat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCFloat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCFloat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCFloat.stringdata0))
        return static_cast<void*>(const_cast< QVLCFloat*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCFloat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
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
void QVLCFloat::floatChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVLCString_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCString_t qt_meta_stringdata_QVLCString = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QVLCString"
QT_MOC_LITERAL(1, 11, 13), // "stringChanged"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "QVLCString\0stringChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCString[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QVLCString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVLCString *_t = static_cast<QVLCString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVLCString::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVLCString::stringChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QVLCString::staticMetaObject = {
    { &QVLCVariable::staticMetaObject, qt_meta_stringdata_QVLCString.data,
      qt_meta_data_QVLCString,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCString::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCString.stringdata0))
        return static_cast<void*>(const_cast< QVLCString*>(this));
    return QVLCVariable::qt_metacast(_clname);
}

int QVLCString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCVariable::qt_metacall(_c, _id, _a);
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
void QVLCString::stringChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
