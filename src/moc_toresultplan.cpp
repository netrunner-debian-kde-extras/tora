/****************************************************************************
** Meta object code from reading C++ file 'toresultplan.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toresultplan.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toresultplan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toResultPlan[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toResultPlan[] = {
    "toResultPlan\0\0poll()\0"
};

const QMetaObject toResultPlan::staticMetaObject = {
    { &toResultView::staticMetaObject, qt_meta_stringdata_toResultPlan,
      qt_meta_data_toResultPlan, 0 }
};

const QMetaObject *toResultPlan::metaObject() const
{
    return &staticMetaObject;
}

void *toResultPlan::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toResultPlan))
	return static_cast<void*>(const_cast< toResultPlan*>(this));
    return toResultView::qt_metacast(_clname);
}

int toResultPlan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toResultView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: poll(); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE