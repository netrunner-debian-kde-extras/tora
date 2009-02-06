/****************************************************************************
** Meta object code from reading C++ file 'tofilesize.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tofilesize.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tofilesize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toFilesize[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toFilesize[] = {
    "toFilesize\0\0valueChanged()\0changeType(bool)\0"
    "changedSize()\0"
};

const QMetaObject toFilesize::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_toFilesize,
      qt_meta_data_toFilesize, 0 }
};

const QMetaObject *toFilesize::metaObject() const
{
    return &staticMetaObject;
}

void *toFilesize::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toFilesize))
	return static_cast<void*>(const_cast< toFilesize*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int toFilesize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged(); break;
        case 1: changeType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: changedSize(); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void toFilesize::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
