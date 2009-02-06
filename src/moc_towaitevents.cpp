/****************************************************************************
** Meta object code from reading C++ file 'towaitevents.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "towaitevents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'towaitevents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toWaitEvents[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      34,   13,   13,   13, 0x0a,
      52,   13,   13,   13, 0x0a,
      59,   13,   13,   13, 0x0a,
      69,   13,   13,   13, 0x0a,
      77,   13,   13,   13, 0x0a,
      84,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toWaitEvents[] = {
    "toWaitEvents\0\0connectionChanged()\0"
    "changeSelection()\0poll()\0refresh()\0"
    "start()\0stop()\0changeType(int)\0"
};

const QMetaObject toWaitEvents::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toWaitEvents,
      qt_meta_data_toWaitEvents, 0 }
};

const QMetaObject *toWaitEvents::metaObject() const
{
    return &staticMetaObject;
}

void *toWaitEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toWaitEvents))
	return static_cast<void*>(const_cast< toWaitEvents*>(this));
    return QWidget::qt_metacast(_clname);
}

int toWaitEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionChanged(); break;
        case 1: changeSelection(); break;
        case 2: poll(); break;
        case 3: refresh(); break;
        case 4: start(); break;
        case 5: stop(); break;
        case 6: changeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
