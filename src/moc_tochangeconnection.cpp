/****************************************************************************
** Meta object code from reading C++ file 'tochangeconnection.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tochangeconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tochangeconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toChangeConnection[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      47,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toChangeConnection[] = {
    "toChangeConnection\0\0changeConnection(QAction*)\0"
    "popupMenu()\0"
};

const QMetaObject toChangeConnection::staticMetaObject = {
    { &toPopupButton::staticMetaObject, qt_meta_stringdata_toChangeConnection,
      qt_meta_data_toChangeConnection, 0 }
};

const QMetaObject *toChangeConnection::metaObject() const
{
    return &staticMetaObject;
}

void *toChangeConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toChangeConnection))
	return static_cast<void*>(const_cast< toChangeConnection*>(this));
    return toPopupButton::qt_metacast(_clname);
}

int toChangeConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toPopupButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeConnection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: popupMenu(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
