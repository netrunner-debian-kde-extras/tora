/****************************************************************************
** Meta object code from reading C++ file 'tooutput.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tooutput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tooutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toOutput[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      18,    9,    9,    9, 0x0a,
      28,    9,    9,    9, 0x0a,
      46,   42,    9,    9, 0x0a,
      76,   69,    9,    9, 0x0a,
     108,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toOutput[] = {
    "toOutput\0\0clear()\0refresh()\0disable(bool)\0"
    "str\0changeRefresh(QString)\0widget\0"
    "windowActivated(QMdiSubWindow*)\0"
    "toggleMenu()\0"
};

const QMetaObject toOutput::staticMetaObject = {
    { &toToolWidget::staticMetaObject, qt_meta_stringdata_toOutput,
      qt_meta_data_toOutput, 0 }
};

const QMetaObject *toOutput::metaObject() const
{
    return &staticMetaObject;
}

void *toOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toOutput))
	return static_cast<void*>(const_cast< toOutput*>(this));
    return toToolWidget::qt_metacast(_clname);
}

int toOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toToolWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clear(); break;
        case 1: refresh(); break;
        case 2: disable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: changeRefresh((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: windowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 5: toggleMenu(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_toLogOutput[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      23,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toLogOutput[] = {
    "toLogOutput\0\0refresh()\0changeType()\0"
};

const QMetaObject toLogOutput::staticMetaObject = {
    { &toOutput::staticMetaObject, qt_meta_stringdata_toLogOutput,
      qt_meta_data_toLogOutput, 0 }
};

const QMetaObject *toLogOutput::metaObject() const
{
    return &staticMetaObject;
}

void *toLogOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toLogOutput))
	return static_cast<void*>(const_cast< toLogOutput*>(this));
    return toOutput::qt_metacast(_clname);
}

int toLogOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toOutput::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: changeType(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
