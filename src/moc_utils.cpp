/****************************************************************************
** Meta object code from reading C++ file 'utils.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "utils.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toPopupButton[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toPopupButton[] = {
    "toPopupButton\0"
};

const QMetaObject toPopupButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_toPopupButton,
      qt_meta_data_toPopupButton, 0 }
};

const QMetaObject *toPopupButton::metaObject() const
{
    return &staticMetaObject;
}

void *toPopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toPopupButton))
	return static_cast<void*>(const_cast< toPopupButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int toPopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_toSpacer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_toSpacer[] = {
    "toSpacer\0"
};

const QMetaObject toSpacer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toSpacer,
      qt_meta_data_toSpacer, 0 }
};

const QMetaObject *toSpacer::metaObject() const
{
    return &staticMetaObject;
}

void *toSpacer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSpacer))
	return static_cast<void*>(const_cast< toSpacer*>(this));
    return QWidget::qt_metacast(_clname);
}

int toSpacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
