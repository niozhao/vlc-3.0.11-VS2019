/****************************************************************************
** Meta object code from reading C++ file 'customwidgets.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/gui/qt/util/customwidgets.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customwidgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFramelessButton_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFramelessButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFramelessButton_t qt_meta_stringdata_QFramelessButton = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QFramelessButton"

    },
    "QFramelessButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFramelessButton[] = {

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

void QFramelessButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QFramelessButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QFramelessButton.data,
      qt_meta_data_QFramelessButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFramelessButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFramelessButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFramelessButton.stringdata0))
        return static_cast<void*>(const_cast< QFramelessButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QFramelessButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_VLCQDial_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VLCQDial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VLCQDial_t qt_meta_stringdata_VLCQDial = {
    {
QT_MOC_LITERAL(0, 0, 8) // "VLCQDial"

    },
    "VLCQDial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VLCQDial[] = {

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

void VLCQDial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VLCQDial::staticMetaObject = {
    { &QDial::staticMetaObject, qt_meta_stringdata_VLCQDial.data,
      qt_meta_data_VLCQDial,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VLCQDial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VLCQDial::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VLCQDial.stringdata0))
        return static_cast<void*>(const_cast< VLCQDial*>(this));
    return QDial::qt_metacast(_clname);
}

int VLCQDial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QToolButtonExt_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QToolButtonExt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QToolButtonExt_t qt_meta_stringdata_QToolButtonExt = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QToolButtonExt"
QT_MOC_LITERAL(1, 15, 12), // "shortClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "longClicked"
QT_MOC_LITERAL(4, 41, 12), // "releasedSlot"
QT_MOC_LITERAL(5, 54, 11) // "clickedSlot"

    },
    "QToolButtonExt\0shortClicked\0\0longClicked\0"
    "releasedSlot\0clickedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QToolButtonExt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QToolButtonExt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QToolButtonExt *_t = static_cast<QToolButtonExt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shortClicked(); break;
        case 1: _t->longClicked(); break;
        case 2: _t->releasedSlot(); break;
        case 3: _t->clickedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QToolButtonExt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QToolButtonExt::shortClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QToolButtonExt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QToolButtonExt::longClicked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QToolButtonExt::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QToolButtonExt.data,
      qt_meta_data_QToolButtonExt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QToolButtonExt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QToolButtonExt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButtonExt.stringdata0))
        return static_cast<void*>(const_cast< QToolButtonExt*>(this));
    return QToolButton::qt_metacast(_clname);
}

int QToolButtonExt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void QToolButtonExt::shortClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QToolButtonExt::longClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QVLCDebugLevelSpinBox_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVLCDebugLevelSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVLCDebugLevelSpinBox_t qt_meta_stringdata_QVLCDebugLevelSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QVLCDebugLevelSpinBox"

    },
    "QVLCDebugLevelSpinBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVLCDebugLevelSpinBox[] = {

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

void QVLCDebugLevelSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QVLCDebugLevelSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_QVLCDebugLevelSpinBox.data,
      qt_meta_data_QVLCDebugLevelSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVLCDebugLevelSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVLCDebugLevelSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCDebugLevelSpinBox.stringdata0))
        return static_cast<void*>(const_cast< QVLCDebugLevelSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int QVLCDebugLevelSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SpinningIcon_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpinningIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpinningIcon_t qt_meta_stringdata_SpinningIcon = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SpinningIcon"

    },
    "SpinningIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpinningIcon[] = {

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

void SpinningIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SpinningIcon::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SpinningIcon.data,
      qt_meta_data_SpinningIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpinningIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinningIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpinningIcon.stringdata0))
        return static_cast<void*>(const_cast< SpinningIcon*>(this));
    return QLabel::qt_metacast(_clname);
}

int SpinningIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_YesNoCheckBox_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YesNoCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YesNoCheckBox_t qt_meta_stringdata_YesNoCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 13) // "YesNoCheckBox"

    },
    "YesNoCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YesNoCheckBox[] = {

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

void YesNoCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject YesNoCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_YesNoCheckBox.data,
      qt_meta_data_YesNoCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *YesNoCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YesNoCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_YesNoCheckBox.stringdata0))
        return static_cast<void*>(const_cast< YesNoCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int YesNoCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
