/********************************************************************************
** Form generated from reading ui file 'tobrowserfilterui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOBROWSERFILTERUI_H
#define UI_TOBROWSERFILTERUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "toresultview.h"

QT_BEGIN_NAMESPACE

class Ui_toBrowserFilterUI
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QPushButton *OkButton;
    QPushButton *Cancel;
    QGroupBox *ButtonsBox;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QRadioButton *None;
    QRadioButton *StartWith;
    QRadioButton *EndWith;
    QRadioButton *Contains;
    QRadioButton *CommaSeparate;
    QRadioButton *RegExp;
    QLineEdit *String;
    QGroupBox *TablespaceType;
    QGridLayout *gridLayout1;
    QRadioButton *IncludeAll;
    QRadioButton *Include;
    QRadioButton *Exclude;
    toResultView *Tablespaces;
    QHBoxLayout *hboxLayout1;
    QCheckBox *OnlyOwnSchema;
    QCheckBox *IgnoreCase;
    QCheckBox *Invert;

    void setupUi(QDialog *toBrowserFilterUI)
    {
    if (toBrowserFilterUI->objectName().isEmpty())
        toBrowserFilterUI->setObjectName(QString::fromUtf8("toBrowserFilterUI"));
    toBrowserFilterUI->resize(646, 484);
    gridLayout = new QGridLayout(toBrowserFilterUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 4, 0, 1, 1);

    OkButton = new QPushButton(toBrowserFilterUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(OkButton->sizePolicy().hasHeightForWidth());
    OkButton->setSizePolicy(sizePolicy);
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 4, 1, 1, 1);

    Cancel = new QPushButton(toBrowserFilterUI);
    Cancel->setObjectName(QString::fromUtf8("Cancel"));
    sizePolicy.setHeightForWidth(Cancel->sizePolicy().hasHeightForWidth());
    Cancel->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Cancel, 4, 2, 1, 1);

    ButtonsBox = new QGroupBox(toBrowserFilterUI);
    ButtonsBox->setObjectName(QString::fromUtf8("ButtonsBox"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ButtonsBox->sizePolicy().hasHeightForWidth());
    ButtonsBox->setSizePolicy(sizePolicy1);
    ButtonsBox->setMinimumSize(QSize(0, 0));
    vboxLayout = new QVBoxLayout(ButtonsBox);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    None = new QRadioButton(ButtonsBox);
    None->setObjectName(QString::fromUtf8("None"));
    None->setChecked(true);
    None->setProperty("buttonGroupId", QVariant(0));

    hboxLayout->addWidget(None);

    StartWith = new QRadioButton(ButtonsBox);
    StartWith->setObjectName(QString::fromUtf8("StartWith"));
    StartWith->setProperty("buttonGroupId", QVariant(1));

    hboxLayout->addWidget(StartWith);

    EndWith = new QRadioButton(ButtonsBox);
    EndWith->setObjectName(QString::fromUtf8("EndWith"));
    EndWith->setProperty("buttonGroupId", QVariant(2));

    hboxLayout->addWidget(EndWith);

    Contains = new QRadioButton(ButtonsBox);
    Contains->setObjectName(QString::fromUtf8("Contains"));
    Contains->setProperty("buttonGroupId", QVariant(3));

    hboxLayout->addWidget(Contains);

    CommaSeparate = new QRadioButton(ButtonsBox);
    CommaSeparate->setObjectName(QString::fromUtf8("CommaSeparate"));
    CommaSeparate->setProperty("buttonGroupId", QVariant(4));

    hboxLayout->addWidget(CommaSeparate);

    RegExp = new QRadioButton(ButtonsBox);
    RegExp->setObjectName(QString::fromUtf8("RegExp"));
    RegExp->setProperty("buttonGroupId", QVariant(5));

    hboxLayout->addWidget(RegExp);


    vboxLayout->addLayout(hboxLayout);

    String = new QLineEdit(ButtonsBox);
    String->setObjectName(QString::fromUtf8("String"));
    String->setEnabled(false);

    vboxLayout->addWidget(String);


    gridLayout->addWidget(ButtonsBox, 1, 0, 1, 3);

    TablespaceType = new QGroupBox(toBrowserFilterUI);
    TablespaceType->setObjectName(QString::fromUtf8("TablespaceType"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(TablespaceType->sizePolicy().hasHeightForWidth());
    TablespaceType->setSizePolicy(sizePolicy2);
    gridLayout1 = new QGridLayout(TablespaceType);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    IncludeAll = new QRadioButton(TablespaceType);
    IncludeAll->setObjectName(QString::fromUtf8("IncludeAll"));
    IncludeAll->setChecked(true);

    gridLayout1->addWidget(IncludeAll, 0, 0, 1, 1);

    Include = new QRadioButton(TablespaceType);
    Include->setObjectName(QString::fromUtf8("Include"));

    gridLayout1->addWidget(Include, 0, 1, 1, 1);

    Exclude = new QRadioButton(TablespaceType);
    Exclude->setObjectName(QString::fromUtf8("Exclude"));

    gridLayout1->addWidget(Exclude, 0, 2, 1, 1);

    Tablespaces = new toResultView(TablespaceType);
    Tablespaces->setObjectName(QString::fromUtf8("Tablespaces"));
    Tablespaces->setEnabled(false);
    Tablespaces->setFocusPolicy(Qt::StrongFocus);

    gridLayout1->addWidget(Tablespaces, 1, 0, 1, 3);


    gridLayout->addWidget(TablespaceType, 2, 0, 1, 3);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(0, 0, 0, 0);
    OnlyOwnSchema = new QCheckBox(toBrowserFilterUI);
    OnlyOwnSchema->setObjectName(QString::fromUtf8("OnlyOwnSchema"));

    hboxLayout1->addWidget(OnlyOwnSchema);

    IgnoreCase = new QCheckBox(toBrowserFilterUI);
    IgnoreCase->setObjectName(QString::fromUtf8("IgnoreCase"));
    IgnoreCase->setEnabled(false);
    IgnoreCase->setChecked(true);

    hboxLayout1->addWidget(IgnoreCase);

    Invert = new QCheckBox(toBrowserFilterUI);
    Invert->setObjectName(QString::fromUtf8("Invert"));
    Invert->setEnabled(false);

    hboxLayout1->addWidget(Invert);


    gridLayout->addLayout(hboxLayout1, 0, 0, 1, 3);

    QWidget::setTabOrder(OnlyOwnSchema, IgnoreCase);
    QWidget::setTabOrder(IgnoreCase, Invert);
    QWidget::setTabOrder(Invert, None);
    QWidget::setTabOrder(None, String);
    QWidget::setTabOrder(String, IncludeAll);
    QWidget::setTabOrder(IncludeAll, Include);
    QWidget::setTabOrder(Include, Exclude);
    QWidget::setTabOrder(Exclude, Tablespaces);
    QWidget::setTabOrder(Tablespaces, OkButton);
    QWidget::setTabOrder(OkButton, Cancel);

    retranslateUi(toBrowserFilterUI);
    QObject::connect(None, SIGNAL(toggled(bool)), String, SLOT(setDisabled(bool)));
    QObject::connect(None, SIGNAL(toggled(bool)), IgnoreCase, SLOT(setDisabled(bool)));
    QObject::connect(None, SIGNAL(toggled(bool)), Invert, SLOT(setDisabled(bool)));
    QObject::connect(Cancel, SIGNAL(clicked()), toBrowserFilterUI, SLOT(reject()));
    QObject::connect(OkButton, SIGNAL(clicked()), toBrowserFilterUI, SLOT(accept()));
    QObject::connect(IncludeAll, SIGNAL(toggled(bool)), Tablespaces, SLOT(setDisabled(bool)));

    QMetaObject::connectSlotsByName(toBrowserFilterUI);
    } // setupUi

    void retranslateUi(QDialog *toBrowserFilterUI)
    {
    toBrowserFilterUI->setWindowTitle(QApplication::translate("toBrowserFilterUI", "Filter setting", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toBrowserFilterUI", "&Ok", 0, QApplication::UnicodeUTF8));
    Cancel->setText(QApplication::translate("toBrowserFilterUI", "Cancel", 0, QApplication::UnicodeUTF8));
    ButtonsBox->setTitle(QApplication::translate("toBrowserFilterUI", "Filter on name", 0, QApplication::UnicodeUTF8));
    None->setText(QApplication::translate("toBrowserFilterUI", "&No filter", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    StartWith->setToolTip(QApplication::translate("toBrowserFilterUI", "Object name start with", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    StartWith->setText(QApplication::translate("toBrowserFilterUI", "&Start with", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    EndWith->setToolTip(QApplication::translate("toBrowserFilterUI", "Object name ends in", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    EndWith->setText(QApplication::translate("toBrowserFilterUI", "&End with", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Contains->setToolTip(QApplication::translate("toBrowserFilterUI", "Object name contains", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Contains->setText(QApplication::translate("toBrowserFilterUI", "&Contains", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CommaSeparate->setToolTip(QApplication::translate("toBrowserFilterUI", "Comma separated list of object names", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    CommaSeparate->setText(QApplication::translate("toBrowserFilterUI", "&Comma list", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    RegExp->setToolTip(QApplication::translate("toBrowserFilterUI", "Object name matches RegExp", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    RegExp->setText(QApplication::translate("toBrowserFilterUI", "&RegExp", 0, QApplication::UnicodeUTF8));
    TablespaceType->setTitle(QApplication::translate("toBrowserFilterUI", "Filter on tablespace", 0, QApplication::UnicodeUTF8));
    IncludeAll->setText(QApplication::translate("toBrowserFilterUI", "Include &All", 0, QApplication::UnicodeUTF8));
    Include->setText(QApplication::translate("toBrowserFilterUI", "&Include", 0, QApplication::UnicodeUTF8));
    Exclude->setText(QApplication::translate("toBrowserFilterUI", "&Exclude", 0, QApplication::UnicodeUTF8));
    OnlyOwnSchema->setText(QApplication::translate("toBrowserFilterUI", "Only display own schema", 0, QApplication::UnicodeUTF8));
    IgnoreCase->setText(QApplication::translate("toBrowserFilterUI", "Ignore &Case", 0, QApplication::UnicodeUTF8));
    Invert->setText(QApplication::translate("toBrowserFilterUI", "&Invert selection", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toBrowserFilterUI);
    } // retranslateUi

};

namespace Ui {
    class toBrowserFilterUI: public Ui_toBrowserFilterUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOBROWSERFILTERUI_H
