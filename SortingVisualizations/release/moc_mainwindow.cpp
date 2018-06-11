/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "clearData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "getUserInput"
QT_MOC_LITERAL(4, 35, 7), // "getList"
QT_MOC_LITERAL(5, 43, 16), // "std::vector<int>"
QT_MOC_LITERAL(6, 60, 16), // "printPreSortList"
QT_MOC_LITERAL(7, 77, 4), // "list"
QT_MOC_LITERAL(8, 82, 17), // "printPostSortList"
QT_MOC_LITERAL(9, 100, 13), // "insertToTable"
QT_MOC_LITERAL(10, 114, 14), // "parseSortInput"
QT_MOC_LITERAL(11, 129, 1), // "v"
QT_MOC_LITERAL(12, 131, 8), // "plotData"
QT_MOC_LITERAL(13, 140, 23), // "on_btn_genData_released"
QT_MOC_LITERAL(14, 164, 27), // "on_spin_minNum_valueChanged"
QT_MOC_LITERAL(15, 192, 4), // "arg1"
QT_MOC_LITERAL(16, 197, 27), // "on_spin_maxNum_valueChanged"
QT_MOC_LITERAL(17, 225, 28), // "on_spin_num2gen_valueChanged"
QT_MOC_LITERAL(18, 254, 25) // "on_btn_clearData_released"

    },
    "MainWindow\0clearData\0\0getUserInput\0"
    "getList\0std::vector<int>\0printPreSortList\0"
    "list\0printPostSortList\0insertToTable\0"
    "parseSortInput\0v\0plotData\0"
    "on_btn_genData_released\0"
    "on_spin_minNum_valueChanged\0arg1\0"
    "on_spin_maxNum_valueChanged\0"
    "on_spin_num2gen_valueChanged\0"
    "on_btn_clearData_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       6,    1,   82,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void,
    0x80000000 | 5, 0x80000000 | 5,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearData(); break;
        case 1: _t->getUserInput(); break;
        case 2: { std::vector<int> _r = _t->getList();
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = _r; }  break;
        case 3: _t->printPreSortList((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 4: _t->printPostSortList((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 5: _t->insertToTable(); break;
        case 6: { std::vector<int> _r = _t->parseSortInput((*reinterpret_cast< std::vector<int>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = _r; }  break;
        case 7: _t->plotData(); break;
        case 8: _t->on_btn_genData_released(); break;
        case 9: _t->on_spin_minNum_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_spin_maxNum_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_spin_num2gen_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_btn_clearData_released(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
