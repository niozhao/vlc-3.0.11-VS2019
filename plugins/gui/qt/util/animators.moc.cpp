/****************************************************************************
** Meta object code from reading C++ file 'animators.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/util/animators.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animators.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BasicAnimator_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasicAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasicAnimator_t qt_meta_stringdata_BasicAnimator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BasicAnimator"
QT_MOC_LITERAL(1, 14, 12), // "frameChanged"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "BasicAnimator\0frameChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicAnimator[] = {

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

void BasicAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BasicAnimator *_t = static_cast<BasicAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BasicAnimator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BasicAnimator::frameChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BasicAnimator::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_BasicAnimator.data,
      qt_meta_data_BasicAnimator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BasicAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BasicAnimator.stringdata0))
        return static_cast<void*>(const_cast< BasicAnimator*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int BasicAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
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
void BasicAnimator::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_PixmapAnimator_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PixmapAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PixmapAnimator_t qt_meta_stringdata_PixmapAnimator = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PixmapAnimator"
QT_MOC_LITERAL(1, 15, 11), // "pixmapReady"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "PixmapAnimator\0pixmapReady\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PixmapAnimator[] = {

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
    QMetaType::Void, QMetaType::QPixmap,    2,

       0        // eod
};

void PixmapAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PixmapAnimator *_t = static_cast<PixmapAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pixmapReady((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PixmapAnimator::*_t)(const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PixmapAnimator::pixmapReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PixmapAnimator::staticMetaObject = {
    { &BasicAnimator::staticMetaObject, qt_meta_stringdata_PixmapAnimator.data,
      qt_meta_data_PixmapAnimator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PixmapAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixmapAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PixmapAnimator.stringdata0))
        return static_cast<void*>(const_cast< PixmapAnimator*>(this));
    return BasicAnimator::qt_metacast(_clname);
}

int PixmapAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicAnimator::qt_metacall(_c, _id, _a);
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
void PixmapAnimator::pixmapReady(const QPixmap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DelegateAnimationHelper_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateAnimationHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateAnimationHelper_t qt_meta_stringdata_DelegateAnimationHelper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DelegateAnimationHelper"
QT_MOC_LITERAL(1, 24, 3), // "run"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14) // "updateDelegate"

    },
    "DelegateAnimationHelper\0run\0\0"
    "updateDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateAnimationHelper[] = {

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
       3,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void DelegateAnimationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DelegateAnimationHelper *_t = static_cast<DelegateAnimationHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateDelegate(); break;
        default: ;
        }
    }
}

const QMetaObject DelegateAnimationHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DelegateAnimationHelper.data,
      qt_meta_data_DelegateAnimationHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DelegateAnimationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateAnimationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateAnimationHelper.stringdata0))
        return static_cast<void*>(const_cast< DelegateAnimationHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int DelegateAnimationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
