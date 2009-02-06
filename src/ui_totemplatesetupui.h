/********************************************************************************
** Form generated from reading ui file 'totemplatesetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTEMPLATESETUPUI_H
#define UI_TOTEMPLATESETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toTemplateSetupUI
{
public:
    QGridLayout *gridLayout;
    toTreeWidget *FileList;
    QPushButton *AddButton;
    QPushButton *RemoveButton;
    QPushButton *EditButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *toTemplateSetupUI)
    {
    if (toTemplateSetupUI->objectName().isEmpty())
        toTemplateSetupUI->setObjectName(QString::fromUtf8("toTemplateSetupUI"));
    toTemplateSetupUI->resize(526, 448);
    gridLayout = new QGridLayout(toTemplateSetupUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    FileList = new toTreeWidget(toTemplateSetupUI);
    FileList->setObjectName(QString::fromUtf8("FileList"));
    FileList->setAllColumnsShowFocus(true);

    gridLayout->addWidget(FileList, 0, 0, 1, 5);

    AddButton = new QPushButton(toTemplateSetupUI);
    AddButton->setObjectName(QString::fromUtf8("AddButton"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
    AddButton->setSizePolicy(sizePolicy);

    gridLayout->addWidget(AddButton, 1, 4, 1, 1);

    RemoveButton = new QPushButton(toTemplateSetupUI);
    RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
    sizePolicy.setHeightForWidth(RemoveButton->sizePolicy().hasHeightForWidth());
    RemoveButton->setSizePolicy(sizePolicy);

    gridLayout->addWidget(RemoveButton, 1, 0, 1, 1);

    EditButton = new QPushButton(toTemplateSetupUI);
    EditButton->setObjectName(QString::fromUtf8("EditButton"));
    sizePolicy.setHeightForWidth(EditButton->sizePolicy().hasHeightForWidth());
    EditButton->setSizePolicy(sizePolicy);

    gridLayout->addWidget(EditButton, 1, 2, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 1, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 1, 3, 1, 1);

    QWidget::setTabOrder(EditButton, FileList);
    QWidget::setTabOrder(FileList, AddButton);
    QWidget::setTabOrder(AddButton, RemoveButton);

    retranslateUi(toTemplateSetupUI);
    QObject::connect(EditButton, SIGNAL(clicked()), toTemplateSetupUI, SLOT(editFile()));
    QObject::connect(RemoveButton, SIGNAL(clicked()), toTemplateSetupUI, SLOT(delFile()));
    QObject::connect(AddButton, SIGNAL(clicked()), toTemplateSetupUI, SLOT(addFile()));

    QMetaObject::connectSlotsByName(toTemplateSetupUI);
    } // setupUi

    void retranslateUi(QWidget *toTemplateSetupUI)
    {
    toTemplateSetupUI->setWindowTitle(QApplication::translate("toTemplateSetupUI", "Form1", 0, QApplication::UnicodeUTF8));
    FileList->headerItem()->setText(0, QApplication::translate("toTemplateSetupUI", "Root", 0, QApplication::UnicodeUTF8));
    FileList->headerItem()->setText(1, QApplication::translate("toTemplateSetupUI", "Filename", 0, QApplication::UnicodeUTF8));
    AddButton->setText(QApplication::translate("toTemplateSetupUI", "&Add File", 0, QApplication::UnicodeUTF8));
    RemoveButton->setText(QApplication::translate("toTemplateSetupUI", "&Remove File", 0, QApplication::UnicodeUTF8));
    EditButton->setText(QApplication::translate("toTemplateSetupUI", "&Edit File", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toTemplateSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toTemplateSetupUI: public Ui_toTemplateSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTEMPLATESETUPUI_H
