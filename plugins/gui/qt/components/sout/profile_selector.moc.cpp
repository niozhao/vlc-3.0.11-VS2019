/****************************************************************************
** Meta object code from reading C++ file 'profile_selector.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/sout/profile_selector.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile_selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VLCProfileSelector_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLCProfileSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLCProfileSelector_t qt_meta_stringdata_VLCProfileSelector = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VLCProfileSelector"
QT_MOC_LITERAL(1, 19, 14), // "optionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "newProfile"
QT_MOC_LITERAL(4, 46, 11), // "editProfile"
QT_MOC_LITERAL(5, 58, 13), // "deleteProfile"
QT_MOC_LITERAL(6, 72, 13), // "updateOptions"
QT_MOC_LITERAL(7, 86, 1), // "i"
QT_MOC_LITERAL(8, 88, 22) // "updateOptionsOldFormat"

    },
    "VLCProfileSelector\0optionsChanged\0\0"
    "newProfile\0editProfile\0deleteProfile\0"
    "updateOptions\0i\0updateOptionsOldFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLCProfileSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void VLCProfileSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VLCProfileSelector *_t = static_cast<VLCProfileSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->optionsChanged(); break;
        case 1: _t->newProfile(); break;
        case 2: _t->editProfile(); break;
        case 3: _t->deleteProfile(); break;
        case 4: _t->updateOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateOptionsOldFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VLCProfileSelector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VLCProfileSelector::optionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VLCProfileSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VLCProfileSelector.data,
      qt_meta_data_VLCProfileSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLCProfileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCProfileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileSelector.stringdata0))
        return static_cast<void*>(const_cast< VLCProfileSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int VLCProfileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void VLCProfileSelector::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_VLCProfileEditor_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLCProfileEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLCProfileEditor_t qt_meta_stringdata_VLCProfileEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "VLCProfileEditor"
QT_MOC_LITERAL(1, 17, 5), // "close"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "muxSelected"
QT_MOC_LITERAL(4, 36, 13), // "codecSelected"
QT_MOC_LITERAL(5, 50, 14), // "activatePanels"
QT_MOC_LITERAL(6, 65, 14), // "fixBirateState"
QT_MOC_LITERAL(7, 80, 10) // "fixQPState"

    },
    "VLCProfileEditor\0close\0\0muxSelected\0"
    "codecSelected\0activatePanels\0"
    "fixBirateState\0fixQPState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLCProfileEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VLCProfileEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VLCProfileEditor *_t = static_cast<VLCProfileEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->muxSelected(); break;
        case 2: _t->codecSelected(); break;
        case 3: _t->activatePanels(); break;
        case 4: _t->fixBirateState(); break;
        case 5: _t->fixQPState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VLCProfileEditor::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_VLCProfileEditor.data,
      qt_meta_data_VLCProfileEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLCProfileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCProfileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLCProfileEditor.stringdata0))
        return static_cast<void*>(const_cast< VLCProfileEditor*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int VLCProfileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
