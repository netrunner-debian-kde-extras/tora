/****************************************************************************
** Meta object code from reading C++ file 'todebug.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "todebug.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'todebug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toDebug[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      23,    8,    8,    8, 0x08,
      44,    8,    8,    8, 0x0a,
      51,    8,    8,    8, 0x0a,
      61,    8,    8,    8, 0x0a,
      71,    8,    8,    8, 0x0a,
      91,   89,    8,    8, 0x0a,
     130,    8,    8,    8, 0x0a,
     146,    8,    8,    8, 0x0a,
     158,    8,    8,    8, 0x0a,
     170,    8,    8,    8, 0x0a,
     203,    8,    8,    8, 0x0a,
     233,    8,    8,    8, 0x0a,
     246,   89,    8,    8, 0x0a,
     270,    8,    8,    8, 0x0a,
     281,    8,    8,    8, 0x0a,
     291,    8,    8,    8, 0x0a,
     305,    8,    8,    8, 0x0a,
     320,    8,    8,    8, 0x0a,
     331,    8,    8,    8, 0x0a,
     342,    8,    8,    8, 0x0a,
     353,    8,    8,    8, 0x0a,
     368,  366,    8,    8, 0x0a,
     400,    8,    8,    8, 0x0a,
     416,    8,    8,    8, 0x0a,
     430,    8,    8,    8, 0x0a,
     441,    8,    8,    8, 0x0a,
     460,  455,    8,    8, 0x0a,
     491,    8,    8,    8, 0x0a,
     505,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toDebug[] = {
    "toDebug\0\0startTarget()\0enableDebugger(bool)\0"
    "stop()\0compile()\0refresh()\0changeSchema(int)\0"
    ",\0changePackage(QModelIndex,QModelIndex)\0"
    "showDebug(bool)\0prevError()\0nextError()\0"
    "changeContent(toTreeWidgetItem*)\0"
    "showSource(toTreeWidgetItem*)\0"
    "scanSource()\0reorderContent(int,int)\0"
    "newSheet()\0execute()\0toggleBreak()\0"
    "toggleEnable()\0addWatch()\0stepInto()\0"
    "stepOver()\0returnFrom()\0w\0"
    "windowActivated(QMdiSubWindow*)\0"
    "selectedWatch()\0deleteWatch()\0clearLog()\0"
    "changeWatch()\0item\0changeWatch(toTreeWidgetItem*)\0"
    "closeEditor()\0closeAllEditor()\0"
};

const QMetaObject toDebug::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toDebug,
      qt_meta_data_toDebug, 0 }
};

const QMetaObject *toDebug::metaObject() const
{
    return &staticMetaObject;
}

void *toDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDebug))
	return static_cast<void*>(const_cast< toDebug*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startTarget(); break;
        case 1: enableDebugger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: stop(); break;
        case 3: compile(); break;
        case 4: refresh(); break;
        case 5: changeSchema((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: changePackage((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: showDebug((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: prevError(); break;
        case 9: nextError(); break;
        case 10: changeContent((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: showSource((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: scanSource(); break;
        case 13: reorderContent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: newSheet(); break;
        case 15: execute(); break;
        case 16: toggleBreak(); break;
        case 17: toggleEnable(); break;
        case 18: addWatch(); break;
        case 19: stepInto(); break;
        case 20: stepOver(); break;
        case 21: returnFrom(); break;
        case 22: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 23: selectedWatch(); break;
        case 24: deleteWatch(); break;
        case 25: clearLog(); break;
        case 26: changeWatch(); break;
        case 27: changeWatch((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 28: closeEditor(); break;
        case 29: closeAllEditor(); break;
        }
        _id -= 30;
    }
    return _id;
}
static const uint qt_meta_data_toDebugWatch[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toDebugWatch[] = {
    "toDebugWatch\0\0num\0changeScope(int)\0"
};

const QMetaObject toDebugWatch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toDebugWatch,
      qt_meta_data_toDebugWatch, 0 }
};

const QMetaObject *toDebugWatch::metaObject() const
{
    return &staticMetaObject;
}

void *toDebugWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDebugWatch))
	return static_cast<void*>(const_cast< toDebugWatch*>(this));
    if (!strcmp(_clname, "Ui::toDebugWatchUI"))
	return static_cast< Ui::toDebugWatchUI*>(const_cast< toDebugWatch*>(this));
    return QDialog::qt_metacast(_clname);
}

int toDebugWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeScope((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
