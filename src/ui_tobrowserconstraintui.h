/********************************************************************************
** Form generated from reading ui file 'tobrowserconstraintui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOBROWSERCONSTRAINTUI_H
#define UI_TOBROWSERCONSTRAINTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "toresultcols.h"
#include "totableselect.h"

QT_BEGIN_NAMESPACE

class Ui_toBrowserConstraintUI
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QComboBox *Name;
    QComboBox *Type;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel1;
    QToolButton *AddButton;
    QToolButton *DeleteButton;
    QPushButton *PushButton2;
    QStackedWidget *WidgetStack;
    QWidget *ReferentialPage;
    QGridLayout *gridLayout1;
    QLabel *TextLabel3;
    QLineEdit *SourceColumns;
    toResultCols *SourceColList;
    QLabel *TextLabel5;
    QLineEdit *ReferedColumns;
    toResultCols *ReferColList;
    QFrame *Line3;
    QFrame *Line1;
    QComboBox *ReferTable;
    QLabel *TextLabel4;
    QWidget *PrimaryPage;
    QVBoxLayout *vboxLayout;
    QGroupBox *UniqueType;
    QGridLayout *gridLayout2;
    QRadioButton *Primary;
    QRadioButton *Unique;
    QLabel *TextLabel2;
    QLineEdit *UniqueCols;
    toResultCols *UniqueColList;
    QWidget *CheckPage;
    QGridLayout *gridLayout3;
    QLabel *TextLabel2_2;
    QLabel *TextLabel6;
    QLineEdit *CheckCondition;
    toResultCols *CheckColumn;
    QPushButton *ApplyButton;
    QToolButton *ToolButton1;
    toTableSelect *TableSelect;

    void setupUi(QDialog *toBrowserConstraintUI)
    {
    if (toBrowserConstraintUI->objectName().isEmpty())
        toBrowserConstraintUI->setObjectName(QString::fromUtf8("toBrowserConstraintUI"));
    toBrowserConstraintUI->resize(640, 669);
    gridLayout = new QGridLayout(toBrowserConstraintUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    Name = new QComboBox(toBrowserConstraintUI);
    Name->setObjectName(QString::fromUtf8("Name"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(3);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Name->sizePolicy().hasHeightForWidth());
    Name->setSizePolicy(sizePolicy);

    hboxLayout->addWidget(Name);

    Type = new QComboBox(toBrowserConstraintUI);
    Type->setObjectName(QString::fromUtf8("Type"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(1);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(Type->sizePolicy().hasHeightForWidth());
    Type->setSizePolicy(sizePolicy1);

    hboxLayout->addWidget(Type);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 4);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 4, 1, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    TextLabel1 = new QLabel(toBrowserConstraintUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy2);
    TextLabel1->setWordWrap(false);

    hboxLayout1->addWidget(TextLabel1);

    AddButton = new QToolButton(toBrowserConstraintUI);
    AddButton->setObjectName(QString::fromUtf8("AddButton"));

    hboxLayout1->addWidget(AddButton);

    DeleteButton = new QToolButton(toBrowserConstraintUI);
    DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

    hboxLayout1->addWidget(DeleteButton);


    gridLayout->addLayout(hboxLayout1, 1, 0, 1, 4);

    PushButton2 = new QPushButton(toBrowserConstraintUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    gridLayout->addWidget(PushButton2, 4, 3, 1, 1);

    WidgetStack = new QStackedWidget(toBrowserConstraintUI);
    WidgetStack->setObjectName(QString::fromUtf8("WidgetStack"));
    QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(WidgetStack->sizePolicy().hasHeightForWidth());
    WidgetStack->setSizePolicy(sizePolicy3);
    ReferentialPage = new QWidget();
    ReferentialPage->setObjectName(QString::fromUtf8("ReferentialPage"));
    gridLayout1 = new QGridLayout(ReferentialPage);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel3 = new QLabel(ReferentialPage);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(TextLabel3->sizePolicy().hasHeightForWidth());
    TextLabel3->setSizePolicy(sizePolicy4);
    TextLabel3->setWordWrap(false);

    gridLayout1->addWidget(TextLabel3, 1, 0, 2, 1);

    SourceColumns = new QLineEdit(ReferentialPage);
    SourceColumns->setObjectName(QString::fromUtf8("SourceColumns"));

    gridLayout1->addWidget(SourceColumns, 3, 0, 1, 1);

    SourceColList = new toResultCols(ReferentialPage);
    SourceColList->setObjectName(QString::fromUtf8("SourceColList"));
    QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(SourceColList->sizePolicy().hasHeightForWidth());
    SourceColList->setSizePolicy(sizePolicy5);
    SourceColList->setFocusPolicy(Qt::StrongFocus);

    gridLayout1->addWidget(SourceColList, 4, 0, 1, 1);

    TextLabel5 = new QLabel(ReferentialPage);
    TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
    sizePolicy4.setHeightForWidth(TextLabel5->sizePolicy().hasHeightForWidth());
    TextLabel5->setSizePolicy(sizePolicy4);
    TextLabel5->setWordWrap(false);

    gridLayout1->addWidget(TextLabel5, 2, 2, 1, 2);

    ReferedColumns = new QLineEdit(ReferentialPage);
    ReferedColumns->setObjectName(QString::fromUtf8("ReferedColumns"));

    gridLayout1->addWidget(ReferedColumns, 3, 2, 1, 2);

    ReferColList = new toResultCols(ReferentialPage);
    ReferColList->setObjectName(QString::fromUtf8("ReferColList"));
    sizePolicy5.setHeightForWidth(ReferColList->sizePolicy().hasHeightForWidth());
    ReferColList->setSizePolicy(sizePolicy5);
    ReferColList->setFocusPolicy(Qt::StrongFocus);

    gridLayout1->addWidget(ReferColList, 4, 2, 1, 2);

    Line3 = new QFrame(ReferentialPage);
    Line3->setObjectName(QString::fromUtf8("Line3"));
    Line3->setFrameShape(QFrame::HLine);
    Line3->setFrameShadow(QFrame::Sunken);

    gridLayout1->addWidget(Line3, 1, 2, 1, 2);

    Line1 = new QFrame(ReferentialPage);
    Line1->setObjectName(QString::fromUtf8("Line1"));
    Line1->setFrameShape(QFrame::VLine);
    Line1->setFrameShadow(QFrame::Sunken);

    gridLayout1->addWidget(Line1, 0, 1, 5, 1);

    ReferTable = new QComboBox(ReferentialPage);
    ReferTable->setObjectName(QString::fromUtf8("ReferTable"));
    sizePolicy4.setHeightForWidth(ReferTable->sizePolicy().hasHeightForWidth());
    ReferTable->setSizePolicy(sizePolicy4);
    ReferTable->setEditable(true);

    gridLayout1->addWidget(ReferTable, 0, 3, 1, 1);

    TextLabel4 = new QLabel(ReferentialPage);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(TextLabel4->sizePolicy().hasHeightForWidth());
    TextLabel4->setSizePolicy(sizePolicy6);
    TextLabel4->setWordWrap(false);

    gridLayout1->addWidget(TextLabel4, 0, 2, 1, 1);

    WidgetStack->addWidget(ReferentialPage);
    PrimaryPage = new QWidget();
    PrimaryPage->setObjectName(QString::fromUtf8("PrimaryPage"));
    vboxLayout = new QVBoxLayout(PrimaryPage);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    UniqueType = new QGroupBox(PrimaryPage);
    UniqueType->setObjectName(QString::fromUtf8("UniqueType"));
    QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(UniqueType->sizePolicy().hasHeightForWidth());
    UniqueType->setSizePolicy(sizePolicy7);
    gridLayout2 = new QGridLayout(UniqueType);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    Primary = new QRadioButton(UniqueType);
    Primary->setObjectName(QString::fromUtf8("Primary"));
    Primary->setChecked(true);

    gridLayout2->addWidget(Primary, 0, 0, 1, 1);

    Unique = new QRadioButton(UniqueType);
    Unique->setObjectName(QString::fromUtf8("Unique"));

    gridLayout2->addWidget(Unique, 0, 1, 1, 1);


    vboxLayout->addWidget(UniqueType);

    TextLabel2 = new QLabel(PrimaryPage);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    vboxLayout->addWidget(TextLabel2);

    UniqueCols = new QLineEdit(PrimaryPage);
    UniqueCols->setObjectName(QString::fromUtf8("UniqueCols"));

    vboxLayout->addWidget(UniqueCols);

    UniqueColList = new toResultCols(PrimaryPage);
    UniqueColList->setObjectName(QString::fromUtf8("UniqueColList"));
    sizePolicy3.setHeightForWidth(UniqueColList->sizePolicy().hasHeightForWidth());
    UniqueColList->setSizePolicy(sizePolicy3);
    UniqueColList->setFocusPolicy(Qt::StrongFocus);

    vboxLayout->addWidget(UniqueColList);

    WidgetStack->addWidget(PrimaryPage);
    CheckPage = new QWidget();
    CheckPage->setObjectName(QString::fromUtf8("CheckPage"));
    gridLayout3 = new QGridLayout(CheckPage);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    TextLabel2_2 = new QLabel(CheckPage);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
    TextLabel2_2->setWordWrap(false);

    gridLayout3->addWidget(TextLabel2_2, 2, 0, 1, 1);

    TextLabel6 = new QLabel(CheckPage);
    TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
    TextLabel6->setWordWrap(false);

    gridLayout3->addWidget(TextLabel6, 0, 0, 1, 1);

    CheckCondition = new QLineEdit(CheckPage);
    CheckCondition->setObjectName(QString::fromUtf8("CheckCondition"));

    gridLayout3->addWidget(CheckCondition, 3, 0, 1, 1);

    CheckColumn = new toResultCols(CheckPage);
    CheckColumn->setObjectName(QString::fromUtf8("CheckColumn"));
    sizePolicy3.setHeightForWidth(CheckColumn->sizePolicy().hasHeightForWidth());
    CheckColumn->setSizePolicy(sizePolicy3);
    CheckColumn->setFocusPolicy(Qt::StrongFocus);

    gridLayout3->addWidget(CheckColumn, 1, 0, 1, 1);

    WidgetStack->addWidget(CheckPage);

    gridLayout->addWidget(WidgetStack, 3, 0, 1, 4);

    ApplyButton = new QPushButton(toBrowserConstraintUI);
    ApplyButton->setObjectName(QString::fromUtf8("ApplyButton"));
    ApplyButton->setDefault(true);

    gridLayout->addWidget(ApplyButton, 4, 2, 1, 1);

    ToolButton1 = new QToolButton(toBrowserConstraintUI);
    ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
    ToolButton1->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(ToolButton1, 4, 0, 1, 1);

    TableSelect = new toTableSelect(toBrowserConstraintUI);
    TableSelect->setObjectName(QString::fromUtf8("TableSelect"));

    gridLayout->addWidget(TableSelect, 0, 0, 1, 4);

    TextLabel1->setBuddy(Name);
    TextLabel3->setBuddy(SourceColumns);
    TextLabel5->setBuddy(ReferedColumns);
    TextLabel4->setBuddy(ReferTable);
    TextLabel2->setBuddy(UniqueCols);
    TextLabel2_2->setBuddy(CheckCondition);
    TextLabel6->setBuddy(CheckColumn);
    QWidget::setTabOrder(Name, ReferTable);
    QWidget::setTabOrder(ReferTable, SourceColumns);
    QWidget::setTabOrder(SourceColumns, ReferedColumns);
    QWidget::setTabOrder(ReferedColumns, SourceColList);
    QWidget::setTabOrder(SourceColList, ReferColList);
    QWidget::setTabOrder(ReferColList, Primary);
    QWidget::setTabOrder(Primary, UniqueCols);
    QWidget::setTabOrder(UniqueCols, UniqueColList);
    QWidget::setTabOrder(UniqueColList, CheckColumn);
    QWidget::setTabOrder(CheckColumn, CheckCondition);
    QWidget::setTabOrder(CheckCondition, ToolButton1);
    QWidget::setTabOrder(ToolButton1, ApplyButton);
    QWidget::setTabOrder(ApplyButton, PushButton2);

    retranslateUi(toBrowserConstraintUI);
    QObject::connect(ToolButton1, SIGNAL(clicked()), toBrowserConstraintUI, SLOT(displaySQL()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toBrowserConstraintUI, SLOT(reject()));
    QObject::connect(ApplyButton, SIGNAL(clicked()), toBrowserConstraintUI, SLOT(accept()));
    QObject::connect(Name, SIGNAL(activated(int)), toBrowserConstraintUI, SLOT(changeConstraint()));
    QObject::connect(AddButton, SIGNAL(clicked()), toBrowserConstraintUI, SLOT(addConstraint()));
    QObject::connect(DeleteButton, SIGNAL(clicked()), toBrowserConstraintUI, SLOT(delConstraint()));
    QObject::connect(ReferTable, SIGNAL(activated(QString)), toBrowserConstraintUI, SLOT(changeRefered()));
    QObject::connect(Type, SIGNAL(activated(int)), toBrowserConstraintUI, SLOT(changeType(int)));

    QMetaObject::connectSlotsByName(toBrowserConstraintUI);
    } // setupUi

    void retranslateUi(QDialog *toBrowserConstraintUI)
    {
    toBrowserConstraintUI->setWindowTitle(QApplication::translate("toBrowserConstraintUI", "Constraint info", 0, QApplication::UnicodeUTF8));
    Type->insertItems(0, QStringList()
     << QApplication::translate("toBrowserConstraintUI", "Foreign Key", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toBrowserConstraintUI", "Check", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toBrowserConstraintUI", "Unique Primary Key", 0, QApplication::UnicodeUTF8)
    );
    TextLabel1->setText(QApplication::translate("toBrowserConstraintUI", "&Name", 0, QApplication::UnicodeUTF8));
    AddButton->setText(QString());
    DeleteButton->setText(QString());
    PushButton2->setText(QApplication::translate("toBrowserConstraintUI", "Cancel", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("toBrowserConstraintUI", "&Columns", 0, QApplication::UnicodeUTF8));
    TextLabel5->setText(QApplication::translate("toBrowserConstraintUI", "R&efered columns", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("toBrowserConstraintUI", "Refers &To", 0, QApplication::UnicodeUTF8));
    UniqueType->setTitle(QApplication::translate("toBrowserConstraintUI", "&Type", 0, QApplication::UnicodeUTF8));
    Primary->setText(QApplication::translate("toBrowserConstraintUI", "Primary key", 0, QApplication::UnicodeUTF8));
    Unique->setText(QApplication::translate("toBrowserConstraintUI", "Unique", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toBrowserConstraintUI", "&Columns", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("toBrowserConstraintUI", "C&ondition", 0, QApplication::UnicodeUTF8));
    TextLabel6->setText(QApplication::translate("toBrowserConstraintUI", "&Column", 0, QApplication::UnicodeUTF8));
    ApplyButton->setText(QApplication::translate("toBrowserConstraintUI", "&Ok", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ToolButton1->setToolTip(QApplication::translate("toBrowserConstraintUI", "Display SQL to create this constraint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ToolButton1->setText(QString());
    Q_UNUSED(toBrowserConstraintUI);
    } // retranslateUi

};

namespace Ui {
    class toBrowserConstraintUI: public Ui_toBrowserConstraintUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOBROWSERCONSTRAINTUI_H
