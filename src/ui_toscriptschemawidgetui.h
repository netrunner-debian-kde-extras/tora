/********************************************************************************
** Form generated from reading ui file 'toscriptschemawidgetui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSCRIPTSCHEMAWIDGETUI_H
#define UI_TOSCRIPTSCHEMAWIDGETUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "toworkingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_toScriptSchemaWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox;
    QGridLayout *gridLayout1;
    QLabel *TextLabel2;
    QComboBox *ConnectionComboBox;
    QLabel *TextLabel2_2;
    QComboBox *SchemaComboBox;
    QLabel *TextLabel1;
    QVBoxLayout *verticalLayout;
    toWorkingWidget *WorkingWidget;
    QTreeView *ObjectsView;

    void setupUi(QWidget *toScriptSchemaWidget)
    {
    if (toScriptSchemaWidget->objectName().isEmpty())
        toScriptSchemaWidget->setObjectName(QString::fromUtf8("toScriptSchemaWidget"));
    toScriptSchemaWidget->resize(247, 558);
    gridLayout = new QGridLayout(toScriptSchemaWidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox = new QGroupBox(toScriptSchemaWidget);
    GroupBox->setObjectName(QString::fromUtf8("GroupBox"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(GroupBox->sizePolicy().hasHeightForWidth());
    GroupBox->setSizePolicy(sizePolicy);
    gridLayout1 = new QGridLayout(GroupBox);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel2 = new QLabel(GroupBox);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2, 0, 0, 1, 1);

    ConnectionComboBox = new QComboBox(GroupBox);
    ConnectionComboBox->setObjectName(QString::fromUtf8("ConnectionComboBox"));

    gridLayout1->addWidget(ConnectionComboBox, 1, 0, 1, 1);

    TextLabel2_2 = new QLabel(GroupBox);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
    TextLabel2_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2_2, 2, 0, 1, 1);

    SchemaComboBox = new QComboBox(GroupBox);
    SchemaComboBox->setObjectName(QString::fromUtf8("SchemaComboBox"));

    gridLayout1->addWidget(SchemaComboBox, 3, 0, 1, 1);

    TextLabel1 = new QLabel(GroupBox);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy1);
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 4, 0, 1, 1);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(0);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    WorkingWidget = new toWorkingWidget(GroupBox);
    WorkingWidget->setObjectName(QString::fromUtf8("WorkingWidget"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(WorkingWidget->sizePolicy().hasHeightForWidth());
    WorkingWidget->setSizePolicy(sizePolicy2);

    verticalLayout->addWidget(WorkingWidget);

    ObjectsView = new QTreeView(GroupBox);
    ObjectsView->setObjectName(QString::fromUtf8("ObjectsView"));
    ObjectsView->setSelectionMode(QAbstractItemView::MultiSelection);

    verticalLayout->addWidget(ObjectsView);


    gridLayout1->addLayout(verticalLayout, 5, 0, 1, 1);

    TextLabel2->raise();
    TextLabel2_2->raise();
    ConnectionComboBox->raise();
    SchemaComboBox->raise();
    TextLabel1->raise();
    ObjectsView->raise();
    WorkingWidget->raise();
    ObjectsView->raise();

    gridLayout->addWidget(GroupBox, 0, 0, 1, 1);

    TextLabel1->setBuddy(ObjectsView);

    retranslateUi(toScriptSchemaWidget);

    QMetaObject::connectSlotsByName(toScriptSchemaWidget);
    } // setupUi

    void retranslateUi(QWidget *toScriptSchemaWidget)
    {
    toScriptSchemaWidget->setWindowTitle(QApplication::translate("toScriptSchemaWidget", "Form", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toScriptSchemaWidget", "Connection", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("toScriptSchemaWidget", "Schema", 0, QApplication::UnicodeUTF8));
    SchemaComboBox->insertItems(0, QStringList()
     << QApplication::translate("toScriptSchemaWidget", "All", 0, QApplication::UnicodeUTF8)
    );
    TextLabel1->setText(QApplication::translate("toScriptSchemaWidget", "&Include objects", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toScriptSchemaWidget);
    } // retranslateUi

};

namespace Ui {
    class toScriptSchemaWidget: public Ui_toScriptSchemaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSCRIPTSCHEMAWIDGETUI_H
