/****************************************************************************
** Meta object code from reading C++ file 'toparamget.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toparamget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toparamget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toParamGetButton[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toParamGetButton[] = {
    "toParamGetButton\0\0clicked(int)\0"
    "internalClicked()\0"
};

const QMetaObject toParamGetButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_toParamGetButton,
      qt_meta_data_toParamGetButton, 0 }
};

const QMetaObject *toParamGetButton::metaObject() const
{
    return &staticMetaObject;
}

void *toParamGetButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toParamGetButton))
	return static_cast<void*>(const_cast< toParamGetButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int toParamGetButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: internalClicked(); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void toParamGetButton::clicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_toParamGet[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toParamGet[] = {
    "toParamGet\0\0row\0showMemo(int)\0"
};

const QMetaObject toParamGet::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toParamGet,
      qt_meta_data_toParamGet, 0 }
};

const QMetaObject *toParamGet::metaObject() const
{
    return &staticMetaObject;
}

void *toParamGet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toParamGet))
	return static_cast<void*>(const_cast< toParamGet*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toParamGet*>(this));
    return QDialog::qt_metacast(_clname);
}

int toParamGet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showMemo((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
