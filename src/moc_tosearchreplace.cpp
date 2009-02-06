/****************************************************************************
** Meta object code from reading C++ file 'tosearchreplace.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosearchreplace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosearchreplace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSearchReplace[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x08,
      43,   16,   16,   16, 0x08,
      53,   16,   16,   16, 0x08,
      62,   16,   16,   16, 0x08,
      78,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toSearchReplace[] = {
    "toSearchReplace\0\0searchNext()\0"
    "replaceAll()\0replace()\0search()\0"
    "searchChanged()\0displayHelp()\0"
};

const QMetaObject toSearchReplace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toSearchReplace,
      qt_meta_data_toSearchReplace, 0 }
};

const QMetaObject *toSearchReplace::metaObject() const
{
    return &staticMetaObject;
}

void *toSearchReplace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSearchReplace))
	return static_cast<void*>(const_cast< toSearchReplace*>(this));
    if (!strcmp(_clname, "Ui::toSearchReplaceUI"))
	return static_cast< Ui::toSearchReplaceUI*>(const_cast< toSearchReplace*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toSearchReplace*>(this));
    if (!strcmp(_clname, "toEditWidget::editHandler"))
	return static_cast< toEditWidget::editHandler*>(const_cast< toSearchReplace*>(this));
    return QDialog::qt_metacast(_clname);
}

int toSearchReplace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchNext(); break;
        case 1: replaceAll(); break;
        case 2: replace(); break;
        case 3: search(); break;
        case 4: searchChanged(); break;
        case 5: displayHelp(); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
