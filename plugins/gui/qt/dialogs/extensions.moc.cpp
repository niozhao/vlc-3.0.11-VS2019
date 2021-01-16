/****************************************************************************
** Meta object code from reading C++ file 'extensions.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/extensions.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExtensionsDialogProvider_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionsDialogProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionsDialogProvider_t qt_meta_stringdata_ExtensionsDialogProvider = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ExtensionsDialogProvider"
QT_MOC_LITERAL(1, 25, 12), // "SignalDialog"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "extension_dialog_t*"
QT_MOC_LITERAL(4, 59, 8), // "p_dialog"
QT_MOC_LITERAL(5, 68, 15), // "CreateExtDialog"
QT_MOC_LITERAL(6, 84, 16), // "ExtensionDialog*"
QT_MOC_LITERAL(7, 101, 16), // "DestroyExtDialog"
QT_MOC_LITERAL(8, 118, 15) // "UpdateExtDialog"

    },
    "ExtensionsDialogProvider\0SignalDialog\0"
    "\0extension_dialog_t*\0p_dialog\0"
    "CreateExtDialog\0ExtensionDialog*\0"
    "DestroyExtDialog\0UpdateExtDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionsDialogProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,
       7,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    0x80000000 | 6, 0x80000000 | 3,    4,
    QMetaType::Int, 0x80000000 | 3,    4,
    0x80000000 | 6, 0x80000000 | 3,    4,

       0        // eod
};

void ExtensionsDialogProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtensionsDialogProvider *_t = static_cast<ExtensionsDialogProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1]))); break;
        case 1: { ExtensionDialog* _r = _t->CreateExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ExtensionDialog**>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->DestroyExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { ExtensionDialog* _r = _t->UpdateExtDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ExtensionDialog**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExtensionsDialogProvider::*_t)(extension_dialog_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionsDialogProvider::SignalDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ExtensionsDialogProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtensionsDialogProvider.data,
      qt_meta_data_ExtensionsDialogProvider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtensionsDialogProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionsDialogProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionsDialogProvider.stringdata0))
        return static_cast<void*>(const_cast< ExtensionsDialogProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtensionsDialogProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ExtensionsDialogProvider::SignalDialog(extension_dialog_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ExtensionDialog_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtensionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtensionDialog_t qt_meta_stringdata_ExtensionDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ExtensionDialog"
QT_MOC_LITERAL(1, 16, 13), // "destroyDialog"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "extension_dialog_t*"
QT_MOC_LITERAL(4, 51, 8), // "p_dialog"
QT_MOC_LITERAL(5, 60, 12), // "TriggerClick"
QT_MOC_LITERAL(6, 73, 6), // "object"
QT_MOC_LITERAL(7, 80, 9), // "SyncInput"
QT_MOC_LITERAL(8, 90, 13), // "SyncSelection"
QT_MOC_LITERAL(9, 104, 15) // "parentDestroyed"

    },
    "ExtensionDialog\0destroyDialog\0\0"
    "extension_dialog_t*\0p_dialog\0TriggerClick\0"
    "object\0SyncInput\0SyncSelection\0"
    "parentDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtensionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Int, QMetaType::QObjectStar,    6,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void,

       0        // eod
};

void ExtensionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtensionDialog *_t = static_cast<ExtensionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroyDialog((*reinterpret_cast< extension_dialog_t*(*)>(_a[1]))); break;
        case 1: { int _r = _t->TriggerClick((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->SyncInput((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->SyncSelection((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->parentDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExtensionDialog::*_t)(extension_dialog_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtensionDialog::destroyDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ExtensionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExtensionDialog.data,
      qt_meta_data_ExtensionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtensionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtensionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionDialog.stringdata0))
        return static_cast<void*>(const_cast< ExtensionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExtensionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ExtensionDialog::destroyDialog(extension_dialog_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WidgetMapper_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetMapper_t qt_meta_stringdata_WidgetMapper = {
    {
QT_MOC_LITERAL(0, 0, 12) // "WidgetMapper"

    },
    "WidgetMapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetMapper[] = {

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

void WidgetMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WidgetMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WidgetMapper.data,
      qt_meta_data_WidgetMapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WidgetMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetMapper.stringdata0))
        return static_cast<void*>(const_cast< WidgetMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WidgetMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
