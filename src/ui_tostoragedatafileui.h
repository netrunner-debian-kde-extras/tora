/********************************************************************************
** Form generated from reading ui file 'tostoragedatafileui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSTORAGEDATAFILEUI_H
#define UI_TOSTORAGEDATAFILEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "tofilesize.h"

QT_BEGIN_NAMESPACE

class Ui_toStorageDatafileUI
{
public:
    QGridLayout *gridLayout;
    QLabel *NameLabel;
    QLineEdit *Name;
    QLabel *TextLabel1_2;
    QPushButton *PushButton1;
    QLineEdit *Filename;
    toFilesize *InitialSize;
    QSpacerItem *spacerItem;
    QGroupBox *AutoExtendGroup;
    QGridLayout *gridLayout1;
    QCheckBox *AutoExtend;
    QCheckBox *UnlimitedMax;
    toFilesize *MaximumSize;
    toFilesize *NextSize;

    void setupUi(QWidget *toStorageDatafileUI)
    {
    if (toStorageDatafileUI->objectName().isEmpty())
        toStorageDatafileUI->setObjectName(QString::fromUtf8("toStorageDatafileUI"));
    toStorageDatafileUI->resize(580, 480);
    gridLayout = new QGridLayout(toStorageDatafileUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    NameLabel = new QLabel(toStorageDatafileUI);
    NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
    NameLabel->setWordWrap(false);

    gridLayout->addWidget(NameLabel, 0, 0, 1, 3);

    Name = new QLineEdit(toStorageDatafileUI);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout->addWidget(Name, 1, 0, 1, 3);

    TextLabel1_2 = new QLabel(toStorageDatafileUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 1);

    PushButton1 = new QPushButton(toStorageDatafileUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));

    gridLayout->addWidget(PushButton1, 3, 2, 1, 1);

    Filename = new QLineEdit(toStorageDatafileUI);
    Filename->setObjectName(QString::fromUtf8("Filename"));

    gridLayout->addWidget(Filename, 3, 0, 1, 1);

    InitialSize = new toFilesize(toStorageDatafileUI);
    InitialSize->setObjectName(QString::fromUtf8("InitialSize"));

    gridLayout->addWidget(InitialSize, 4, 0, 1, 3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 7, 1, 1, 1);

    AutoExtendGroup = new QGroupBox(toStorageDatafileUI);
    AutoExtendGroup->setObjectName(QString::fromUtf8("AutoExtendGroup"));
    gridLayout1 = new QGridLayout(AutoExtendGroup);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    AutoExtend = new QCheckBox(AutoExtendGroup);
    AutoExtend->setObjectName(QString::fromUtf8("AutoExtend"));

    gridLayout1->addWidget(AutoExtend, 0, 0, 1, 1);

    UnlimitedMax = new QCheckBox(AutoExtendGroup);
    UnlimitedMax->setObjectName(QString::fromUtf8("UnlimitedMax"));
    UnlimitedMax->setEnabled(false);

    gridLayout1->addWidget(UnlimitedMax, 2, 0, 1, 1);

    MaximumSize = new toFilesize(AutoExtendGroup);
    MaximumSize->setObjectName(QString::fromUtf8("MaximumSize"));
    MaximumSize->setEnabled(false);

    gridLayout1->addWidget(MaximumSize, 3, 0, 1, 1);

    NextSize = new toFilesize(AutoExtendGroup);
    NextSize->setObjectName(QString::fromUtf8("NextSize"));
    NextSize->setEnabled(false);

    gridLayout1->addWidget(NextSize, 1, 0, 1, 1);


    gridLayout->addWidget(AutoExtendGroup, 6, 0, 1, 3);

    NameLabel->setBuddy(Name);
    TextLabel1_2->setBuddy(Name);

    retranslateUi(toStorageDatafileUI);
    QObject::connect(AutoExtend, SIGNAL(toggled(bool)), toStorageDatafileUI, SLOT(autoExtend(bool)));
    QObject::connect(UnlimitedMax, SIGNAL(toggled(bool)), toStorageDatafileUI, SLOT(maximumSize(bool)));
    QObject::connect(PushButton1, SIGNAL(clicked()), toStorageDatafileUI, SLOT(browseFile()));
    QObject::connect(Filename, SIGNAL(textChanged(QString)), toStorageDatafileUI, SLOT(valueChanged(QString)));

    QMetaObject::connectSlotsByName(toStorageDatafileUI);
    } // setupUi

    void retranslateUi(QWidget *toStorageDatafileUI)
    {
    toStorageDatafileUI->setWindowTitle(QApplication::translate("toStorageDatafileUI", "Form1", 0, QApplication::UnicodeUTF8));
    NameLabel->setText(QApplication::translate("toStorageDatafileUI", "&Tablespace name", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toStorageDatafileUI", "&Filename", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toStorageDatafileUI", "&Browse", 0, QApplication::UnicodeUTF8));
    AutoExtendGroup->setTitle(QApplication::translate("toStorageDatafileUI", "Auto extend", 0, QApplication::UnicodeUTF8));
    AutoExtend->setText(QApplication::translate("toStorageDatafileUI", "&Auto extend datafile", 0, QApplication::UnicodeUTF8));
    UnlimitedMax->setText(QApplication::translate("toStorageDatafileUI", "&Unlimited max size", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toStorageDatafileUI);
    } // retranslateUi

};

namespace Ui {
    class toStorageDatafileUI: public Ui_toStorageDatafileUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSTORAGEDATAFILEUI_H
