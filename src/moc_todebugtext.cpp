/****************************************************************************
** Meta object code from reading C++ file 'todebugtext.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "todebugtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'todebugtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toDebugText[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      31,   13,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_toDebugText[] = {
    "toDebugText\0\0margin,line,state\0"
    "toggleBreakpoint(int,int,Qt::KeyboardModifiers)\0"
};

const QMetaObject toDebugText::staticMetaObject = {
    { &toHighlightedText::staticMetaObject, qt_meta_stringdata_toDebugText,
      qt_meta_data_toDebugText, 0 }
};

const QMetaObject *toDebugText::metaObject() const
{
    return &staticMetaObject;
}

void *toDebugText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toDebugText))
	return static_cast<void*>(const_cast< toDebugText*>(this));
    return toHighlightedText::qt_metacast(_clname);
}

int toDebugText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toHighlightedText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toggleBreakpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
