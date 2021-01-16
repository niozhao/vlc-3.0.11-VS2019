/****************************************************************************
** Meta object code from reading C++ file 'bookmarks.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/dialogs/bookmarks.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarks.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookmarksDialog_t {
    QByteArrayData data[14];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarksDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarksDialog_t qt_meta_stringdata_BookmarksDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BookmarksDialog"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "add"
QT_MOC_LITERAL(4, 28, 3), // "del"
QT_MOC_LITERAL(5, 32, 5), // "clear"
QT_MOC_LITERAL(6, 38, 4), // "edit"
QT_MOC_LITERAL(7, 43, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 60, 4), // "item"
QT_MOC_LITERAL(9, 65, 6), // "column"
QT_MOC_LITERAL(10, 72, 7), // "extract"
QT_MOC_LITERAL(11, 80, 12), // "activateItem"
QT_MOC_LITERAL(12, 93, 5), // "index"
QT_MOC_LITERAL(13, 99, 13) // "updateButtons"

    },
    "BookmarksDialog\0update\0\0add\0del\0clear\0"
    "edit\0QTreeWidgetItem*\0item\0column\0"
    "extract\0activateItem\0index\0updateButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    2,   58,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    1,   64,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,

       0        // eod
};

void BookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksDialog *_t = static_cast<BookmarksDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->add(); break;
        case 2: _t->del(); break;
        case 3: _t->clear(); break;
        case 4: _t->edit((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->extract(); break;
        case 6: _t->activateItem((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: _t->updateButtons(); break;
        default: ;
        }
    }
}

const QMetaObject BookmarksDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_BookmarksDialog.data,
      qt_meta_data_BookmarksDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksDialog.stringdata0))
        return static_cast<void*>(const_cast< BookmarksDialog*>(this));
    if (!strcmp(_clname, "Singleton<BookmarksDialog>"))
        return static_cast< Singleton<BookmarksDialog>*>(const_cast< BookmarksDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int BookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
