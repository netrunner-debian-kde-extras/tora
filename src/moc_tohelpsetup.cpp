/****************************************************************************
** Meta object code from reading C++ file 'tohelpsetup.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tohelpsetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tohelpsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toHelpAddFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toHelpAddFile[] = {
    "toHelpAddFile\0\0browse()\0valid()\0"
};

const QMetaObject toHelpAddFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toHelpAddFile,
      qt_meta_data_toHelpAddFile, 0 }
};

const QMetaObject *toHelpAddFile::metaObject() const
{
    return &staticMetaObject;
}

void *toHelpAddFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toHelpAddFile))
	return static_cast<void*>(const_cast< toHelpAddFile*>(this));
    if (!strcmp(_clname, "Ui::toHelpAddFileUI"))
	return static_cast< Ui::toHelpAddFileUI*>(const_cast< toHelpAddFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int toHelpAddFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browse(); break;
        case 1: valid(); break;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_toHelpPrefs[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      27,   12,   12,   12, 0x0a,
      37,   12,   12,   12, 0x0a,
      47,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toHelpPrefs[] = {
    "toHelpPrefs\0\0saveSetting()\0addFile()\0"
    "delFile()\0oracleManuals()\0"
};

const QMetaObject toHelpPrefs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toHelpPrefs,
      qt_meta_data_toHelpPrefs, 0 }
};

const QMetaObject *toHelpPrefs::metaObject() const
{
    return &staticMetaObject;
}

void *toHelpPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toHelpPrefs))
	return static_cast<void*>(const_cast< toHelpPrefs*>(this));
    if (!strcmp(_clname, "Ui::toHelpSetupUI"))
	return static_cast< Ui::toHelpSetupUI*>(const_cast< toHelpPrefs*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toHelpPrefs*>(this));
    return QWidget::qt_metacast(_clname);
}

int toHelpPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: addFile(); break;
        case 2: delFile(); break;
        case 3: oracleManuals(); break;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
