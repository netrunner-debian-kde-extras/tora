/****************************************************************************
** Meta object code from reading C++ file 'totemporary.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totemporary.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totemporary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTemporary[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      30,   23,   12,   12, 0x0a,
      67,   62,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTemporary[] = {
    "toTemporary\0\0refresh()\0widget\0"
    "windowActivated(QMdiSubWindow*)\0item\0"
    "changeItem(toTreeWidgetItem*)\0"
};

const QMetaObject toTemporary::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toTemporary,
      qt_meta_data_toTemporary, 0 }
};

const QMetaObject *toTemporary::metaObject() const
{
    return &staticMetaObject;
}

void *toTemporary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemporary))
	return static_cast<void*>(const_cast< toTemporary*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toTemporary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 2: changeItem((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
