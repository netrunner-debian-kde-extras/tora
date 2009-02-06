/****************************************************************************
** Meta object code from reading C++ file 'tomarkedtext.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tomarkedtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomarkedtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toMarkedText[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      34,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   13,   13,   13, 0x08,
      68,   64,   13,   13, 0x08,
      91,   13,   13,   13, 0x08,
     106,   13,   13,   13, 0x0a,
     117,   13,   13,   13, 0x0a,
     128,   13,   13,   13, 0x0a,
     138,   13,   13,   13, 0x0a,
     149,   13,   13,   13, 0x0a,
     161,   13,   13,   13, 0x0a,
     184,  177,   13,   13, 0x0a,
     200,   13,   13,   13, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_toMarkedText[] = {
    "toMarkedText\0\0displayMenu(QMenu*)\0"
    "fileOpened()\0setTextChanged()\0yes\0"
    "setCopyAvailable(bool)\0linesChanged()\0"
    "editUndo()\0editRedo()\0editCut()\0"
    "editCopy()\0editPaste()\0editSelectAll()\0"
    "select\0selectAll(bool)\0selectAll()\0"
};

const QMetaObject toMarkedText::staticMetaObject = {
    { &QsciScintilla::staticMetaObject, qt_meta_stringdata_toMarkedText,
      qt_meta_data_toMarkedText, 0 }
};

const QMetaObject *toMarkedText::metaObject() const
{
    return &staticMetaObject;
}

void *toMarkedText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toMarkedText))
	return static_cast<void*>(const_cast< toMarkedText*>(this));
    if (!strcmp(_clname, "toEditWidget"))
	return static_cast< toEditWidget*>(const_cast< toMarkedText*>(this));
    return QsciScintilla::qt_metacast(_clname);
}

int toMarkedText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: fileOpened(); break;
        case 2: setTextChanged(); break;
        case 3: setCopyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: linesChanged(); break;
        case 5: editUndo(); break;
        case 6: editRedo(); break;
        case 7: editCut(); break;
        case 8: editCopy(); break;
        case 9: editPaste(); break;
        case 10: editSelectAll(); break;
        case 11: selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: selectAll(); break;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void toMarkedText::displayMenu(QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void toMarkedText::fileOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
