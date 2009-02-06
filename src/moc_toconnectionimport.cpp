/****************************************************************************
** Meta object code from reading C++ file 'toconnectionimport.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toconnectionimport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toconnectionimport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toConnectionImport[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      46,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toConnectionImport[] = {
    "toConnectionImport\0\0toolComboBox_changed(int)\0"
    "refreshAvailable()\0"
};

const QMetaObject toConnectionImport::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toConnectionImport,
      qt_meta_data_toConnectionImport, 0 }
};

const QMetaObject *toConnectionImport::metaObject() const
{
    return &staticMetaObject;
}

void *toConnectionImport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toConnectionImport))
	return static_cast<void*>(const_cast< toConnectionImport*>(this));
    if (!strcmp(_clname, "Ui::toConnectionImport"))
	return static_cast< Ui::toConnectionImport*>(const_cast< toConnectionImport*>(this));
    return QDialog::qt_metacast(_clname);
}

int toConnectionImport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toolComboBox_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: refreshAvailable(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
