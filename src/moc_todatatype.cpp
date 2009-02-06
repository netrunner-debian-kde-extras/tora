/****************************************************************************
** Meta object code from reading C++ file 'todatatype.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "todatatype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'todatatype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toDatatype[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x0a,
      41,   34,   11,   11, 0x0a,
      57,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toDatatype[] = {
    "toDatatype\0\0type\0setType(QString)\0"
    "prefer\0setCustom(bool)\0changeType(int)\0"
};

const QMetaObject toDatatype::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toDatatype,
      qt_meta_data_toDatatype, 0 }
};

const QMetaObject *toDatatype::metaObject() const
{
    return &staticMetaObject;
}

void *toDatatype::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDatatype))
	return static_cast<void*>(const_cast< toDatatype*>(this));
    return QWidget::qt_metacast(_clname);
}

int toDatatype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setCustom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: changeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
