/****************************************************************************
** Meta object code from reading C++ file 'addons_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/managers/addons_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addons_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddonsManager_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddonsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddonsManager_t qt_meta_stringdata_AddonsManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddonsManager"
QT_MOC_LITERAL(1, 14, 10), // "addonAdded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "addon_entry_t*"
QT_MOC_LITERAL(4, 41, 12), // "addonChanged"
QT_MOC_LITERAL(5, 54, 20), // "const addon_entry_t*"
QT_MOC_LITERAL(6, 75, 14), // "discoveryEnded"
QT_MOC_LITERAL(7, 90, 13), // "findNewAddons"
QT_MOC_LITERAL(8, 104, 19), // "findDesignatedAddon"
QT_MOC_LITERAL(9, 124, 3), // "uri"
QT_MOC_LITERAL(10, 128, 13) // "findInstalled"

    },
    "AddonsManager\0addonAdded\0\0addon_entry_t*\0"
    "addonChanged\0const addon_entry_t*\0"
    "discoveryEnded\0findNewAddons\0"
    "findDesignatedAddon\0uri\0findInstalled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddonsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void AddonsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddonsManager *_t = static_cast<AddonsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addonAdded((*reinterpret_cast< addon_entry_t*(*)>(_a[1]))); break;
        case 1: _t->addonChanged((*reinterpret_cast< const addon_entry_t*(*)>(_a[1]))); break;
        case 2: _t->discoveryEnded(); break;
        case 3: _t->findNewAddons(); break;
        case 4: _t->findDesignatedAddon((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->findInstalled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddonsManager::*_t)(addon_entry_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddonsManager::addonAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddonsManager::*_t)(const addon_entry_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddonsManager::addonChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddonsManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddonsManager::discoveryEnded)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AddonsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AddonsManager.data,
      qt_meta_data_AddonsManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddonsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddonsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddonsManager.stringdata0))
        return static_cast<void*>(const_cast< AddonsManager*>(this));
    if (!strcmp(_clname, "Singleton<AddonsManager>"))
        return static_cast< Singleton<AddonsManager>*>(const_cast< AddonsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int AddonsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AddonsManager::addonAdded(addon_entry_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddonsManager::addonChanged(const addon_entry_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddonsManager::discoveryEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
