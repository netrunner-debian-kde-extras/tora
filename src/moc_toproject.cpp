/****************************************************************************
** Meta object code from reading C++ file 'toproject.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toproject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toProject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      20,   10,   10,   10, 0x0a,
      30,   10,   10,   10, 0x0a,
      40,   10,   10,   10, 0x0a,
      53,   10,   10,   10, 0x0a,
      67,   10,   10,   10, 0x0a,
      81,   10,   10,   10, 0x0a,
     100,   10,   10,   10, 0x0a,
     111,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toProject[] = {
    "toProject\0\0update()\0addFile()\0delFile()\0"
    "newProject()\0saveProject()\0generateSQL()\0"
    "selectionChanged()\0moveDown()\0moveUp()\0"
};

const QMetaObject toProject::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_toProject,
      qt_meta_data_toProject, 0 }
};

const QMetaObject *toProject::metaObject() const
{
    return &staticMetaObject;
}

void *toProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toProject))
	return static_cast<void*>(const_cast< toProject*>(this));
    return QWidget::qt_metacast(_clname);
}

int toProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        case 1: addFile(); break;
        case 2: delFile(); break;
        case 3: newProject(); break;
        case 4: saveProject(); break;
        case 5: generateSQL(); break;
        case 6: selectionChanged(); break;
        case 7: moveDown(); break;
        case 8: moveUp(); break;
        }
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_toProjectTemplate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      29,   18,   18,   18, 0x0a,
      44,   39,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_toProjectTemplate[] = {
    "toProjectTemplate\0\0addFile()\0delFile()\0"
    "item\0changeItem(toTreeWidgetItem*)\0"
};

const QMetaObject toProjectTemplate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_toProjectTemplate,
      qt_meta_data_toProjectTemplate, 0 }
};

const QMetaObject *toProjectTemplate::metaObject() const
{
    return &staticMetaObject;
}

void *toProjectTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toProjectTemplate))
	return static_cast<void*>(const_cast< toProjectTemplate*>(this));
    if (!strcmp(_clname, "toTemplateProvider"))
	return static_cast< toTemplateProvider*>(const_cast< toProjectTemplate*>(this));
    return QObject::qt_metacast(_clname);
}

int toProjectTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addFile(); break;
        case 1: delFile(); break;
        case 2: changeItem((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
