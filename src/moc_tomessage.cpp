/****************************************************************************
** Meta object code from reading C++ file 'tomessage.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tomessage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toMessage[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toMessage[] = {
    "toMessage\0\0text\0appendText(QString)\0"
};

const QMetaObject toMessage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toMessage,
      qt_meta_data_toMessage, 0 }
};

const QMetaObject *toMessage::metaObject() const
{
    return &staticMetaObject;
}

void *toMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toMessage))
	return static_cast<void*>(const_cast< toMessage*>(this));
    if (!strcmp(_clname, "Ui::toMessageUI"))
	return static_cast< Ui::toMessageUI*>(const_cast< toMessage*>(this));
    return QDialog::qt_metacast(_clname);
}

int toMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: appendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
