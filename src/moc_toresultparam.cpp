/****************************************************************************
** Meta object code from reading C++ file 'toresultparam.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultparam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultparam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultParam[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      30,   14,   14,   14, 0x08,
      45,   14,   14,   14, 0x08,
      59,   14,   14,   14, 0x08,
      74,   14,   14,   14, 0x08,
     100,   87,   14,   14, 0x08,
     129,   14,   14,   14, 0x08,
     143,   14,   14,   14, 0x08,
     150,   14,   14,   14, 0x08,
     167,   14,   14,   14, 0x08,
     194,  184,   14,   14, 0x0a,
     217,   14,   14,   14, 0x0a,
     234,  227,   14,   14, 0x0a,
     270,  256,   14,   14, 0x0a,
     321,  300,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultParam[] = {
    "toResultParam\0\0generateFile()\0"
    "applySession()\0applySystem()\0"
    "applyChanges()\0changeItem()\0row,col,data\0"
    "changedData(int,int,QString)\0dropChanges()\0"
    "done()\0showHidden(bool)\0showGlobal(bool)\0"
    "sql,param\0query(QString,toQList)\0"
    "refresh()\0Param1\0changeParams(QString)\0"
    "Param1,Param2\0changeParams(QString,QString)\0"
    "Param1,Param2,Param3\0"
    "changeParams(QString,QString,QString)\0"
};

const QMetaObject toResultParam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toResultParam,
      qt_meta_data_toResultParam, 0 }
};

const QMetaObject *toResultParam::metaObject() const
{
    return &staticMetaObject;
}

void *toResultParam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultParam))
	return static_cast<void*>(const_cast< toResultParam*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultParam*>(this));
    return QWidget::qt_metacast(_clname);
}

int toResultParam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: generateFile(); break;
        case 1: applySession(); break;
        case 2: applySystem(); break;
        case 3: applyChanges(); break;
        case 4: changeItem(); break;
        case 5: changedData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: dropChanges(); break;
        case 7: done(); break;
        case 8: showHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: showGlobal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: query((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const toQList(*)>(_a[2]))); break;
        case 11: refresh(); break;
        case 12: changeParams((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
