/****************************************************************************
** Meta object code from reading C++ file 'toresult.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresult.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultObject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      36,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toResultObject[] = {
    "toResultObject\0\0connectionChanged()\0"
    "setup()\0"
};

const QMetaObject toResultObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toResultObject,
      qt_meta_data_toResultObject, 0 }
};

const QMetaObject *toResultObject::metaObject() const
{
    return &staticMetaObject;
}

void *toResultObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultObject))
	return static_cast<void*>(const_cast< toResultObject*>(this));
    return QObject::qt_metacast(_clname);
}

int toResultObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionChanged(); break;
        case 1: setup(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
