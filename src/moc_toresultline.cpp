/****************************************************************************
** Meta object code from reading C++ file 'toresultline.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultline.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultLine[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      31,   24,   13,   13, 0x0a,
      67,   53,   13,   13, 0x0a,
     118,   97,   13,   13, 0x0a,
     156,   13,   13,   13, 0x09,
     176,   13,   13,   13, 0x09,
     194,   13,   13,   13, 0x08,
     201,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultLine[] = {
    "toResultLine\0\0refresh()\0Param1\0"
    "changeParams(QString)\0Param1,Param2\0"
    "changeParams(QString,QString)\0"
    "Param1,Param2,Param3\0"
    "changeParams(QString,QString,QString)\0"
    "connectionChanged()\0addMenues(QMenu*)\0"
    "poll()\0editSQL()\0"
};

const QMetaObject toResultLine::staticMetaObject = {
    { &toLineChart::staticMetaObject, qt_meta_stringdata_toResultLine,
      qt_meta_data_toResultLine, 0 }
};

const QMetaObject *toResultLine::metaObject() const
{
    return &staticMetaObject;
}

void *toResultLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultLine))
	return static_cast<void*>(const_cast< toResultLine*>(this));
    if (!strcmp(_clname, "toResult"))
	return static_cast< toResult*>(const_cast< toResultLine*>(this));
    return toLineChart::qt_metacast(_clname);
}

int toResultLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toLineChart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeParams((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: changeParams((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: connectionChanged(); break;
        case 5: addMenues((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 6: poll(); break;
        case 7: editSQL(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
