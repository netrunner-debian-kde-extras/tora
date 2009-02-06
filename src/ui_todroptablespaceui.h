/********************************************************************************
** Form generated from reading ui file 'todroptablespaceui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TODROPTABLESPACEUI_H
#define UI_TODROPTABLESPACEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toDropTablespaceUI
{
public:
    QGroupBox *buttonGroup3;
    QCheckBox *CascadeCheck;
    QCheckBox *dataFileCheck;
    QCheckBox *IncludingObjectsCheck;

    void setupUi(QWidget *toDropTablespaceUI)
    {
    if (toDropTablespaceUI->objectName().isEmpty())
        toDropTablespaceUI->setObjectName(QString::fromUtf8("toDropTablespaceUI"));
    toDropTablespaceUI->resize(436, 133);
    buttonGroup3 = new QGroupBox(toDropTablespaceUI);
    buttonGroup3->setObjectName(QString::fromUtf8("buttonGroup3"));
    buttonGroup3->setGeometry(QRect(10, 10, 410, 110));
    CascadeCheck = new QCheckBox(buttonGroup3);
    CascadeCheck->setObjectName(QString::fromUtf8("CascadeCheck"));
    CascadeCheck->setEnabled(false);
    CascadeCheck->setGeometry(QRect(40, 50, 340, 20));
    dataFileCheck = new QCheckBox(buttonGroup3);
    dataFileCheck->setObjectName(QString::fromUtf8("dataFileCheck"));
    dataFileCheck->setEnabled(false);
    dataFileCheck->setGeometry(QRect(40, 80, 150, 20));
    IncludingObjectsCheck = new QCheckBox(buttonGroup3);
    IncludingObjectsCheck->setObjectName(QString::fromUtf8("IncludingObjectsCheck"));
    IncludingObjectsCheck->setGeometry(QRect(10, 20, 220, 20));
    IncludingObjectsCheck->setChecked(false);

    retranslateUi(toDropTablespaceUI);
    QObject::connect(IncludingObjectsCheck, SIGNAL(toggled(bool)), CascadeCheck, SLOT(setEnabled(bool)));
    QObject::connect(IncludingObjectsCheck, SIGNAL(toggled(bool)), dataFileCheck, SLOT(setEnabled(bool)));

    QMetaObject::connectSlotsByName(toDropTablespaceUI);
    } // setupUi

    void retranslateUi(QWidget *toDropTablespaceUI)
    {
    toDropTablespaceUI->setWindowTitle(QApplication::translate("toDropTablespaceUI", "Form1", 0, QApplication::UnicodeUTF8));
    buttonGroup3->setTitle(QApplication::translate("toDropTablespaceUI", "Options", 0, QApplication::UnicodeUTF8));
    CascadeCheck->setText(QApplication::translate("toDropTablespaceUI", "even if there is some forerign key referencing them", 0, QApplication::UnicodeUTF8));
    dataFileCheck->setText(QApplication::translate("toDropTablespaceUI", "Delete datafiles", 0, QApplication::UnicodeUTF8));
    IncludingObjectsCheck->setText(QApplication::translate("toDropTablespaceUI", "Drop even if it contains objects", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toDropTablespaceUI);
    } // retranslateUi

};

namespace Ui {
    class toDropTablespaceUI: public Ui_toDropTablespaceUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODROPTABLESPACEUI_H
