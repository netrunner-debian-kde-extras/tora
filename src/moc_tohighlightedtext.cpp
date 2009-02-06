/****************************************************************************
** Meta object code from reading C++ file 'tohighlightedtext.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tohighlightedtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tohighlightedtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toComplPopup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toComplPopup[] = {
    "toComplPopup\0\0hide()\0"
};

const QMetaObject toComplPopup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toComplPopup,
      qt_meta_data_toComplPopup, 0 }
};

const QMetaObject *toComplPopup::metaObject() const
{
    return &staticMetaObject;
}

void *toComplPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toComplPopup))
	return static_cast<void*>(const_cast< toComplPopup*>(this));
    return QWidget::qt_metacast(_clname);
}

int toComplPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: hide(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toHighlightedText[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      31,   18,   18,   18, 0x0a,
      47,   18,   18,   18, 0x0a,
      78,   70,   18,   18, 0x0a,
     108,  103,   18,   18, 0x0a,
     142,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toHighlightedText[] = {
    "toHighlightedText\0\0nextError()\0"
    "previousError()\0autoCompleteFromAPIs()\0"
    "row,col\0positionChanged(int,int)\0item\0"
    "completeFromAPI(QListWidgetItem*)\0"
    "setStatusMessage()\0"
};

const QMetaObject toHighlightedText::staticMetaObject = {
    { &toMarkedText::staticMetaObject, qt_meta_stringdata_toHighlightedText,
      qt_meta_data_toHighlightedText, 0 }
};

const QMetaObject *toHighlightedText::metaObject() const
{
    return &staticMetaObject;
}

void *toHighlightedText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toHighlightedText))
	return static_cast<void*>(const_cast< toHighlightedText*>(this));
    return toMarkedText::qt_metacast(_clname);
}

int toHighlightedText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = toMarkedText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nextError(); break;
        case 1: previousError(); break;
        case 2: autoCompleteFromAPIs(); break;
        case 3: positionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: completeFromAPI((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: setStatusMessage(); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
