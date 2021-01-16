/****************************************************************************
** Meta object code from reading C++ file 'extensions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/extensions_manager.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExtensionsManager_t {
    QByteArrayData data[13];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionsManager_t qt_meta_stringdata_ExtensionsManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ExtensionsManager"
QT_MOC_LITERAL(1, 18, 17), // "extensionsUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "loadExtensions"
QT_MOC_LITERAL(4, 52, 16), // "unloadExtensions"
QT_MOC_LITERAL(5, 69, 16), // "reloadExtensions"
QT_MOC_LITERAL(6, 86, 11), // "triggerMenu"
QT_MOC_LITERAL(7, 98, 2), // "id"
QT_MOC_LITERAL(8, 101, 12), // "inputChanged"
QT_MOC_LITERAL(9, 114, 14), // "playingChanged"
QT_MOC_LITERAL(10, 129, 11), // "metaChanged"
QT_MOC_LITERAL(11, 141, 13), // "input_item_t*"
QT_MOC_LITERAL(12, 155, 7) // "p_input"

    },
    "ExtensionsManager\0extensionsUpdated\0"
    "\0loadExtensions\0unloadExtensions\0"
    "reloadExtensions\0triggerMenu\0id\0"
    "inputChanged\0playingChanged\0metaChanged\0"
    "input_item_t*\0p_input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void ExtensionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtensionsManager *_t = static_cast<ExtensionsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extensionsUpdated(); break;
        case 1: { bool _r = _t->loadExtensions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->unloadExtensions(); break;
        case 3: _t->reloadExtensions(); break;
        case 4: _t->triggerMenu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->inputChanged(); break;
        case 6: _t->playingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->metaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExtensionsManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionsManager::extensionsUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ExtensionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtensionsManager.data,
      qt_meta_data_ExtensionsManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtensionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionsManager.stringdata0))
        return static_cast<void*>(const_cast< ExtensionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtensionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ExtensionsManager::extensionsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
