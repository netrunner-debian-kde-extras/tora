/****************************************************************************
** Meta object code from reading C++ file 'totemplate.h'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "totemplate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'totemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toTemplate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x0a,
      43,   12,   11,   11, 0x0a,
      71,   12,   11,   11, 0x0a,
      99,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTemplate[] = {
    "toTemplate\0\0item\0expand(toTreeWidgetItem*)\0"
    "collapse(toTreeWidgetItem*)\0"
    "selected(toTreeWidgetItem*)\0hideTemplates()\0"
};

const QMetaObject toTemplate::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toTemplate,
      qt_meta_data_toTemplate, 0 }
};

const QMetaObject *toTemplate::metaObject() const
{
    return &staticMetaObject;
}

void *toTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemplate))
	return static_cast<void*>(const_cast< toTemplate*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toTemplate*>(this));
    return QWidget::qt_metacast(_clname);
}

int toTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: expand((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: collapse((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: selected((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: hideTemplates(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_toTemplateSQLObject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toTemplateSQLObject[] = {
    "toTemplateSQLObject\0\0poll()\0"
};

const QMetaObject toTemplateSQLObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toTemplateSQLObject,
      qt_meta_data_toTemplateSQLObject, 0 }
};

const QMetaObject *toTemplateSQLObject::metaObject() const
{
    return &staticMetaObject;
}

void *toTemplateSQLObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemplateSQLObject))
	return static_cast<void*>(const_cast< toTemplateSQLObject*>(this));
    return QObject::qt_metacast(_clname);
}

int toTemplateSQLObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: poll(); break;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_toTemplatePrefs[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      31,   16,   16,   16, 0x0a,
      41,   16,   16,   16, 0x0a,
      52,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTemplatePrefs[] = {
    "toTemplatePrefs\0\0saveSetting()\0addFile()\0"
    "editFile()\0delFile()\0"
};

const QMetaObject toTemplatePrefs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toTemplatePrefs,
      qt_meta_data_toTemplatePrefs, 0 }
};

const QMetaObject *toTemplatePrefs::metaObject() const
{
    return &staticMetaObject;
}

void *toTemplatePrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemplatePrefs))
	return static_cast<void*>(const_cast< toTemplatePrefs*>(this));
    if (!strcmp(_clname, "Ui::toTemplateSetupUI"))
	return static_cast< Ui::toTemplateSetupUI*>(const_cast< toTemplatePrefs*>(this));
    if (!strcmp(_clname, "toSettingTab"))
	return static_cast< toSettingTab*>(const_cast< toTemplatePrefs*>(this));
    return QWidget::qt_metacast(_clname);
}

int toTemplatePrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSetting(); break;
        case 1: addFile(); break;
        case 2: editFile(); break;
        case 3: delFile(); break;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_toTemplateAddFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      28,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTemplateAddFile[] = {
    "toTemplateAddFile\0\0browse()\0valid()\0"
};

const QMetaObject toTemplateAddFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toTemplateAddFile,
      qt_meta_data_toTemplateAddFile, 0 }
};

const QMetaObject *toTemplateAddFile::metaObject() const
{
    return &staticMetaObject;
}

void *toTemplateAddFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemplateAddFile))
	return static_cast<void*>(const_cast< toTemplateAddFile*>(this));
    if (!strcmp(_clname, "Ui::toTemplateAddFileUI"))
	return static_cast< Ui::toTemplateAddFileUI*>(const_cast< toTemplateAddFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int toTemplateAddFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_toTemplateEdit[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      32,   15,   15,   15, 0x0a,
      41,   15,   15,   15, 0x0a,
      51,   15,   15,   15, 0x0a,
      65,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toTemplateEdit[] = {
    "toTemplateEdit\0\0updateFromMap()\0"
    "remove()\0preview()\0newTemplate()\0"
    "changeSelection()\0"
};

const QMetaObject toTemplateEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toTemplateEdit,
      qt_meta_data_toTemplateEdit, 0 }
};

const QMetaObject *toTemplateEdit::metaObject() const
{
    return &staticMetaObject;
}

void *toTemplateEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toTemplateEdit))
	return static_cast<void*>(const_cast< toTemplateEdit*>(this));
    if (!strcmp(_clname, "Ui::toTemplateEditUI"))
	return static_cast< Ui::toTemplateEditUI*>(const_cast< toTemplateEdit*>(this));
    if (!strcmp(_clname, "toHelpContext"))
	return static_cast< toHelpContext*>(const_cast< toTemplateEdit*>(this));
    return QDialog::qt_metacast(_clname);
}

int toTemplateEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateFromMap(); break;
        case 1: remove(); break;
        case 2: preview(); break;
        case 3: newTemplate(); break;
        case 4: changeSelection(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
