/****************************************************************************
** Meta object code from reading C++ file 'tosmtp.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosmtp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosmtp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSMTP[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      20,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toSMTP[] = {
    "toSMTP\0\0readyRead()\0connected()\0"
};

const QMetaObject toSMTP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toSMTP,
      qt_meta_data_toSMTP, 0 }
};

const QMetaObject *toSMTP::metaObject() const
{
    return &staticMetaObject;
}

void *toSMTP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSMTP))
	return static_cast<void*>(const_cast< toSMTP*>(this));
    return QObject::qt_metacast(_clname);
}

int toSMTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readyRead(); break;
        case 1: connected(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
