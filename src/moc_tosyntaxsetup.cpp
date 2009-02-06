/****************************************************************************
** Meta object code from reading C++ file 'tosyntaxsetup.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tosyntaxsetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tosyntaxsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toSyntaxSetup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      44,   14,   14,   14, 0x0a,
      58,   14,   14,   14, 0x0a,
      71,   14,   14,   14, 0x0a,
      84,   14,   14,   14, 0x0a,
     107,  103,   14,   14, 0x0a,
     125,  103,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toSyntaxSetup[] = {
    "toSyntaxSetup\0\0changeLine(QListWidgetItem*)\0"
    "selectColor()\0selectFont()\0selectText()\0"
    "selectResultFont()\0val\0changeUpper(bool)\0"
    "changeHighlight(bool)\0"
};

const QMetaObject toSyntaxSetup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toSyntaxSetup,
      qt_meta_data_toSyntaxSetup, 0 }
};

const QMetaObject *toSyntaxSetup::metaObject() const
{
    return &staticMetaObject;
}

void *toSyntaxSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toSyntaxSetup))
	return static_cast<void*>(const_cast< toSyntaxSetup*>(this));
    if (!strcmp(_clname, "Ui::toSyntaxSetupUI"))
	return static_cast< Ui::toSyntaxSetupUI*>(const_cast< toSyntaxSetup*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toSyntaxSetup*>(this));
    return QWidget::qt_metacast(_clname);
}

int toSyntaxSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeLine((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: selectColor(); break;
        case 2: selectFont(); break;
        case 3: selectText(); break;
        case 4: selectResultFont(); break;
        case 5: changeUpper((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: changeHighlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
