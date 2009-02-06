/********************************************************************************
** Form generated from reading ui file 'tobrowsertableui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOBROWSERTABLEUI_H
#define UI_TOBROWSERTABLEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "tohighlightedtext.h"
#include "toresultcombo.h"

QT_BEGIN_NAMESPACE

class Ui_toBrowserTableUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *PushButton1;
    QPushButton *PushButton2;
    QToolButton *ToolButton1;
    QSpacerItem *spacerItem;
    QTabWidget *Tabs;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    QLabel *SchemaLabel;
    toResultCombo *Schema;
    QLabel *TextLabel1;
    QLineEdit *Name;
    QLabel *TextLabel1_3;
    QLineEdit *Comment;
    QLabel *TablespaceLabel;
    QComboBox *Tablespace;
    QLabel *TextLabel1_3_2;
    toHighlightedText *ExtraDeclarations;
    QLabel *TextLabel1_3_2_2;
    toHighlightedText *StorageDeclarations;
    QLabel *ParallelLabel;
    toHighlightedText *ParallelDeclarations;
    QWidget *ColumnTab;
    QGridLayout *gridLayout1;
    QScrollArea *ColumnList;
    QToolButton *AddColumn;
    QToolButton *RemoveColumn;
    QSpacerItem *spacerItem1;
    QCheckBox *CustomDeclarations;

    void setupUi(QDialog *toBrowserTableUI)
    {
    if (toBrowserTableUI->objectName().isEmpty())
        toBrowserTableUI->setObjectName(QString::fromUtf8("toBrowserTableUI"));
    toBrowserTableUI->resize(651, 561);
    gridLayout = new QGridLayout(toBrowserTableUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    PushButton1 = new QPushButton(toBrowserTableUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 1, 2, 1, 1);

    PushButton2 = new QPushButton(toBrowserTableUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    gridLayout->addWidget(PushButton2, 1, 3, 1, 1);

    ToolButton1 = new QToolButton(toBrowserTableUI);
    ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
    ToolButton1->setFocusPolicy(Qt::StrongFocus);
    const QIcon icon = QIcon(QString::fromUtf8("icons/sql.xpm"));
    ToolButton1->setIcon(icon);

    gridLayout->addWidget(ToolButton1, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 1, 1, 1);

    Tabs = new QTabWidget(toBrowserTableUI);
    Tabs->setObjectName(QString::fromUtf8("Tabs"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    vboxLayout = new QVBoxLayout(tab);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    SchemaLabel = new QLabel(tab);
    SchemaLabel->setObjectName(QString::fromUtf8("SchemaLabel"));
    SchemaLabel->setWordWrap(false);

    vboxLayout->addWidget(SchemaLabel);

    Schema = new toResultCombo(tab);
    Schema->setObjectName(QString::fromUtf8("Schema"));

    vboxLayout->addWidget(Schema);

    TextLabel1 = new QLabel(tab);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    vboxLayout->addWidget(TextLabel1);

    Name = new QLineEdit(tab);
    Name->setObjectName(QString::fromUtf8("Name"));

    vboxLayout->addWidget(Name);

    TextLabel1_3 = new QLabel(tab);
    TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
    TextLabel1_3->setWordWrap(false);

    vboxLayout->addWidget(TextLabel1_3);

    Comment = new QLineEdit(tab);
    Comment->setObjectName(QString::fromUtf8("Comment"));

    vboxLayout->addWidget(Comment);

    TablespaceLabel = new QLabel(tab);
    TablespaceLabel->setObjectName(QString::fromUtf8("TablespaceLabel"));
    TablespaceLabel->setWordWrap(false);

    vboxLayout->addWidget(TablespaceLabel);

    Tablespace = new QComboBox(tab);
    Tablespace->setObjectName(QString::fromUtf8("Tablespace"));

    vboxLayout->addWidget(Tablespace);

    TextLabel1_3_2 = new QLabel(tab);
    TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));
    TextLabel1_3_2->setWordWrap(false);

    vboxLayout->addWidget(TextLabel1_3_2);

    ExtraDeclarations = new toHighlightedText(tab);
    ExtraDeclarations->setObjectName(QString::fromUtf8("ExtraDeclarations"));
    ExtraDeclarations->setFocusPolicy(Qt::WheelFocus);

    vboxLayout->addWidget(ExtraDeclarations);

    TextLabel1_3_2_2 = new QLabel(tab);
    TextLabel1_3_2_2->setObjectName(QString::fromUtf8("TextLabel1_3_2_2"));
    TextLabel1_3_2_2->setWordWrap(false);

    vboxLayout->addWidget(TextLabel1_3_2_2);

    StorageDeclarations = new toHighlightedText(tab);
    StorageDeclarations->setObjectName(QString::fromUtf8("StorageDeclarations"));
    StorageDeclarations->setFocusPolicy(Qt::WheelFocus);

    vboxLayout->addWidget(StorageDeclarations);

    ParallelLabel = new QLabel(tab);
    ParallelLabel->setObjectName(QString::fromUtf8("ParallelLabel"));
    ParallelLabel->setWordWrap(false);

    vboxLayout->addWidget(ParallelLabel);

    ParallelDeclarations = new toHighlightedText(tab);
    ParallelDeclarations->setObjectName(QString::fromUtf8("ParallelDeclarations"));
    ParallelDeclarations->setFocusPolicy(Qt::WheelFocus);

    vboxLayout->addWidget(ParallelDeclarations);

    Tabs->addTab(tab, QString());
    ColumnTab = new QWidget();
    ColumnTab->setObjectName(QString::fromUtf8("ColumnTab"));
    gridLayout1 = new QGridLayout(ColumnTab);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    ColumnList = new QScrollArea(ColumnTab);
    ColumnList->setObjectName(QString::fromUtf8("ColumnList"));
    ColumnList->setFocusPolicy(Qt::StrongFocus);

    gridLayout1->addWidget(ColumnList, 1, 0, 1, 4);

    AddColumn = new QToolButton(ColumnTab);
    AddColumn->setObjectName(QString::fromUtf8("AddColumn"));
    AddColumn->setFocusPolicy(Qt::TabFocus);
    const QIcon icon1 = QIcon(QString::fromUtf8("icons/add.xpm"));
    AddColumn->setIcon(icon1);

    gridLayout1->addWidget(AddColumn, 0, 2, 1, 1);

    RemoveColumn = new QToolButton(ColumnTab);
    RemoveColumn->setObjectName(QString::fromUtf8("RemoveColumn"));
    RemoveColumn->setFocusPolicy(Qt::TabFocus);
    const QIcon icon2 = QIcon(QString::fromUtf8("icons/minus.xpm"));
    RemoveColumn->setIcon(icon2);

    gridLayout1->addWidget(RemoveColumn, 0, 3, 1, 1);

    spacerItem1 = new QSpacerItem(340, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem1, 0, 1, 1, 1);

    CustomDeclarations = new QCheckBox(ColumnTab);
    CustomDeclarations->setObjectName(QString::fromUtf8("CustomDeclarations"));

    gridLayout1->addWidget(CustomDeclarations, 0, 0, 1, 1);

    Tabs->addTab(ColumnTab, QString());

    gridLayout->addWidget(Tabs, 0, 0, 1, 4);

    SchemaLabel->setBuddy(Name);
    TextLabel1->setBuddy(Name);
    TextLabel1_3->setBuddy(Comment);
    TablespaceLabel->setBuddy(Tablespace);
    TextLabel1_3_2->setBuddy(ExtraDeclarations);
    TextLabel1_3_2_2->setBuddy(StorageDeclarations);
    ParallelLabel->setBuddy(ParallelDeclarations);
    QWidget::setTabOrder(Tabs, Name);
    QWidget::setTabOrder(Name, Comment);
    QWidget::setTabOrder(Comment, Tablespace);
    QWidget::setTabOrder(Tablespace, ExtraDeclarations);
    QWidget::setTabOrder(ExtraDeclarations, ToolButton1);
    QWidget::setTabOrder(ToolButton1, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton2);
    QWidget::setTabOrder(PushButton2, AddColumn);
    QWidget::setTabOrder(AddColumn, RemoveColumn);
    QWidget::setTabOrder(RemoveColumn, ColumnList);

    retranslateUi(toBrowserTableUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toBrowserTableUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toBrowserTableUI, SLOT(reject()));
    QObject::connect(ToolButton1, SIGNAL(clicked()), toBrowserTableUI, SLOT(displaySQL()));
    QObject::connect(AddColumn, SIGNAL(clicked()), toBrowserTableUI, SLOT(addColumn()));
    QObject::connect(RemoveColumn, SIGNAL(clicked()), toBrowserTableUI, SLOT(removeColumn()));
    QObject::connect(CustomDeclarations, SIGNAL(toggled(bool)), toBrowserTableUI, SLOT(toggleCustom(bool)));

    Tabs->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(toBrowserTableUI);
    } // setupUi

    void retranslateUi(QDialog *toBrowserTableUI)
    {
    toBrowserTableUI->setWindowTitle(QApplication::translate("toBrowserTableUI", "Table columns", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toBrowserTableUI", "&Ok", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toBrowserTableUI", "Cancel", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    ToolButton1->setToolTip(QApplication::translate("toBrowserTableUI", "Display SQL to create this constraint", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    ToolButton1->setText(QString());
    SchemaLabel->setText(QApplication::translate("toBrowserTableUI", "&Schema", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toBrowserTableUI", "&Name", 0, QApplication::UnicodeUTF8));
    TextLabel1_3->setText(QApplication::translate("toBrowserTableUI", "C&omment", 0, QApplication::UnicodeUTF8));
    TablespaceLabel->setText(QApplication::translate("toBrowserTableUI", "&Tablespace", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_2->setText(QApplication::translate("toBrowserTableUI", "&Extra declarations", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_2_2->setText(QApplication::translate("toBrowserTableUI", "&Storage declarations", 0, QApplication::UnicodeUTF8));
    ParallelLabel->setText(QApplication::translate("toBrowserTableUI", "&Parallel declarations", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(tab), QApplication::translate("toBrowserTableUI", "&General", 0, QApplication::UnicodeUTF8));
    AddColumn->setText(QString());
    RemoveColumn->setText(QString());
    CustomDeclarations->setText(QApplication::translate("toBrowserTableUI", "Custom column declarations", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(ColumnTab), QApplication::translate("toBrowserTableUI", "&Columns", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toBrowserTableUI);
    } // retranslateUi

};

namespace Ui {
    class toBrowserTableUI: public Ui_toBrowserTableUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOBROWSERTABLEUI_H
