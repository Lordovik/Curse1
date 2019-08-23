/****************************************************************************
** Meta object code from reading C++ file 'AddABQuestDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AddABQuestDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddABQuestDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddABQuestDialog_t {
    QByteArrayData data[11];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddABQuestDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddABQuestDialog_t qt_meta_stringdata_AddABQuestDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddABQuestDialog"
QT_MOC_LITERAL(1, 17, 17), // "on_aRadio_toggled"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "b"
QT_MOC_LITERAL(4, 38, 17), // "on_bRadio_toggled"
QT_MOC_LITERAL(5, 56, 17), // "on_cRadio_toggled"
QT_MOC_LITERAL(6, 74, 17), // "on_dRadio_toggled"
QT_MOC_LITERAL(7, 92, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(8, 116, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(9, 136, 21), // "on_RALine_textChanged"
QT_MOC_LITERAL(10, 158, 3) // "str"

    },
    "AddABQuestDialog\0on_aRadio_toggled\0\0"
    "b\0on_bRadio_toggled\0on_cRadio_toggled\0"
    "on_dRadio_toggled\0on_cancelButton_clicked\0"
    "on_okButton_clicked\0on_RALine_textChanged\0"
    "str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddABQuestDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void AddABQuestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddABQuestDialog *_t = static_cast<AddABQuestDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_aRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_bRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_cRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_dRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_okButton_clicked(); break;
        case 6: _t->on_RALine_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddABQuestDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddABQuestDialog.data,
      qt_meta_data_AddABQuestDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddABQuestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddABQuestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddABQuestDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddABQuestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
