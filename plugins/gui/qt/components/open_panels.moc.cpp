/****************************************************************************
** Meta object code from reading C++ file 'open_panels.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/components/open_panels.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'open_panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenPanel_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenPanel_t qt_meta_stringdata_OpenPanel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "OpenPanel"
QT_MOC_LITERAL(1, 10, 10), // "mrlUpdated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "methodChanged"
QT_MOC_LITERAL(4, 36, 6), // "method"
QT_MOC_LITERAL(5, 43, 9) // "updateMRL"

    },
    "OpenPanel\0mrlUpdated\0\0methodChanged\0"
    "method\0updateMRL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       3,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenPanel *_t = static_cast<OpenPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mrlUpdated((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->methodChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateMRL(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenPanel::*_t)(const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenPanel::mrlUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpenPanel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenPanel::methodChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OpenPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OpenPanel.data,
      qt_meta_data_OpenPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenPanel.stringdata0))
        return static_cast<void*>(const_cast< OpenPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int OpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OpenPanel::mrlUpdated(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenPanel::methodChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FileOpenBox_t {
    QByteArrayData data[4];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileOpenBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileOpenBox_t qt_meta_stringdata_FileOpenBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileOpenBox"
QT_MOC_LITERAL(1, 12, 6), // "accept"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6) // "reject"

    },
    "FileOpenBox\0accept\0\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileOpenBox[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileOpenBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileOpenBox *_t = static_cast<FileOpenBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileOpenBox::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_FileOpenBox.data,
      qt_meta_data_FileOpenBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileOpenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOpenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileOpenBox.stringdata0))
        return static_cast<void*>(const_cast< FileOpenBox*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int FileOpenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FileOpenPanel_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileOpenPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileOpenPanel_t qt_meta_stringdata_FileOpenPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileOpenPanel"
QT_MOC_LITERAL(1, 14, 9), // "updateMRL"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "browseFileSub"
QT_MOC_LITERAL(4, 39, 10), // "browseFile"
QT_MOC_LITERAL(5, 50, 10), // "removeFile"
QT_MOC_LITERAL(6, 61, 13) // "updateButtons"

    },
    "FileOpenPanel\0updateMRL\0\0browseFileSub\0"
    "browseFile\0removeFile\0updateButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileOpenPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileOpenPanel *_t = static_cast<FileOpenPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->browseFileSub(); break;
        case 2: _t->browseFile(); break;
        case 3: _t->removeFile(); break;
        case 4: _t->updateButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_FileOpenPanel.data,
      qt_meta_data_FileOpenPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileOpenPanel.stringdata0))
        return static_cast<void*>(const_cast< FileOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int FileOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_NetOpenPanel_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetOpenPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetOpenPanel_t qt_meta_stringdata_NetOpenPanel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "NetOpenPanel"
QT_MOC_LITERAL(1, 13, 9), // "updateMRL"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "NetOpenPanel\0updateMRL\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetOpenPanel[] = {

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

void NetOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetOpenPanel *_t = static_cast<NetOpenPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMRL(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NetOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_NetOpenPanel.data,
      qt_meta_data_NetOpenPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetOpenPanel.stringdata0))
        return static_cast<void*>(const_cast< NetOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int NetOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DiscOpenPanel_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiscOpenPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiscOpenPanel_t qt_meta_stringdata_DiscOpenPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DiscOpenPanel"
QT_MOC_LITERAL(1, 14, 9), // "updateMRL"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "browseDevice"
QT_MOC_LITERAL(4, 38, 13), // "updateButtons"
QT_MOC_LITERAL(5, 52, 5) // "eject"

    },
    "DiscOpenPanel\0updateMRL\0\0browseDevice\0"
    "updateButtons\0eject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiscOpenPanel[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DiscOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiscOpenPanel *_t = static_cast<DiscOpenPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->browseDevice(); break;
        case 2: _t->updateButtons(); break;
        case 3: _t->eject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DiscOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_DiscOpenPanel.data,
      qt_meta_data_DiscOpenPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiscOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiscOpenPanel.stringdata0))
        return static_cast<void*>(const_cast< DiscOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int DiscOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CaptureOpenPanel_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureOpenPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureOpenPanel_t qt_meta_stringdata_CaptureOpenPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CaptureOpenPanel"
QT_MOC_LITERAL(1, 17, 9), // "updateMRL"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "initialize"
QT_MOC_LITERAL(4, 39, 13), // "updateButtons"
QT_MOC_LITERAL(5, 53, 20), // "enableAdvancedDialog"
QT_MOC_LITERAL(6, 74, 14) // "advancedDialog"

    },
    "CaptureOpenPanel\0updateMRL\0\0initialize\0"
    "updateButtons\0enableAdvancedDialog\0"
    "advancedDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureOpenPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void CaptureOpenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CaptureOpenPanel *_t = static_cast<CaptureOpenPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMRL(); break;
        case 1: _t->initialize(); break;
        case 2: _t->updateButtons(); break;
        case 3: _t->enableAdvancedDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->advancedDialog(); break;
        default: ;
        }
    }
}

const QMetaObject CaptureOpenPanel::staticMetaObject = {
    { &OpenPanel::staticMetaObject, qt_meta_stringdata_CaptureOpenPanel.data,
      qt_meta_data_CaptureOpenPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CaptureOpenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureOpenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureOpenPanel.stringdata0))
        return static_cast<void*>(const_cast< CaptureOpenPanel*>(this));
    return OpenPanel::qt_metacast(_clname);
}

int CaptureOpenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OpenPanel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
