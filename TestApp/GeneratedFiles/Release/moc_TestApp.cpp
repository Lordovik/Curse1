/****************************************************************************
** Meta object code from reading C++ file 'TestApp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TestApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestApp_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestApp_t qt_meta_stringdata_TestApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TestApp"
QT_MOC_LITERAL(1, 8, 10), // "logged_out"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 23), // "on_saveAction_triggered"
QT_MOC_LITERAL(4, 44, 25), // "on_logoutAction_triggered"
QT_MOC_LITERAL(5, 70, 6), // "log_in"
QT_MOC_LITERAL(6, 77, 7), // "log_out"
QT_MOC_LITERAL(7, 85, 8), // "add_subj"
QT_MOC_LITERAL(8, 94, 11), // "del_subject"
QT_MOC_LITERAL(9, 106, 10), // "open_studs"
QT_MOC_LITERAL(10, 117, 12), // "ex_with_save"
QT_MOC_LITERAL(11, 130, 2) // "ex"

    },
    "TestApp\0logged_out\0\0on_saveAction_triggered\0"
    "on_logoutAction_triggered\0log_in\0"
    "log_out\0add_subj\0del_subject\0open_studs\0"
    "ex_with_save\0ex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestApp *_t = static_cast<TestApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logged_out(); break;
        case 1: _t->on_saveAction_triggered(); break;
        case 2: _t->on_logoutAction_triggered(); break;
        case 3: _t->log_in(); break;
        case 4: _t->log_out(); break;
        case 5: _t->add_subj(); break;
        case 6: _t->del_subject(); break;
        case 7: _t->open_studs(); break;
        case 8: _t->ex_with_save(); break;
        case 9: _t->ex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestApp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestApp::logged_out)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestApp.data,
      qt_meta_data_TestApp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TestApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TestApp::logged_out()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
