/****************************************************************************
** Meta object code from reading C++ file 'tocurrent.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tocurrent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tocurrent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toCurrent[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toCurrent[] = {
    "toCurrent\0\0refresh()\0poll()\0"
};

const QMetaObject toCurrent::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toCurrent,
      qt_meta_data_toCurrent, 0 }
};

const QMetaObject *toCurrent::metaObject() const
{
    return &staticMetaObject;
}

void *toCurrent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toCurrent))
	return static_cast<void*>(const_cast< toCurrent*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toCurrent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: poll(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
