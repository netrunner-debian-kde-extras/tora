/****************************************************************************
** Meta object code from reading C++ file 'tomemoeditor.h'
**
** Created: Mon Nov 3 14:34:33 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tomemoeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomemoeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_toMemoEditor[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      27,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   13,   13,   13, 0x08,
      66,   13,   13,   13, 0x08,
      77,   13,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     108,   13,   13,   13, 0x0a,
     116,   13,   13,   13, 0x0a,
     130,   13,   13,   13, 0x0a,
     143,   13,   13,   13, 0x0a,
     160,   13,   13,   13, 0x0a,
     182,  173,   13,   13, 0x0a,
     206,   13,   13,   13, 0x0a,
     228,  223,   13,   13, 0x08,
     261,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_toMemoEditor[] = {
    "toMemoEditor\0\0row,col,data\0"
    "changeData(int,int,QString)\0openFile()\0"
    "saveFile()\0readSettings()\0writeSettings()\0"
    "store()\0firstColumn()\0nextColumn()\0"
    "previousColumn()\0lastColumn()\0row,cols\0"
    "changePosition(int,int)\0setText(QString)\0"
    "item\0changeCurrent(toTreeWidgetItem*)\0"
    "null(bool)\0"
};

const QMetaObject toMemoEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_toMemoEditor,
      qt_meta_data_toMemoEditor, 0 }
};

const QMetaObject *toMemoEditor::metaObject() const
{
    return &staticMetaObject;
}

void *toMemoEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_toMemoEditor))
	return static_cast<void*>(const_cast< toMemoEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int toMemoEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: openFile(); break;
        case 2: saveFile(); break;
        case 3: readSettings(); break;
        case 4: writeSettings(); break;
        case 5: store(); break;
        case 6: firstColumn(); break;
        case 7: nextColumn(); break;
        case 8: previousColumn(); break;
        case 9: lastColumn(); break;
        case 10: changePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: changeCurrent((*reinterpret_cast< toTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: null((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void toMemoEditor::changeData(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
