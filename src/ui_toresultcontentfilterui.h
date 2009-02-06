/********************************************************************************
** Form generated from reading ui file 'toresultcontentfilterui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TORESULTCONTENTFILTERUI_H
#define UI_TORESULTCONTENTFILTERUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "tohighlightedtext.h"
#include "toresultcols.h"

QT_BEGIN_NAMESPACE

class Ui_toResultContentFilterUI
{
public:
    QAction *actionCancel;
    QGridLayout *gridLayout;
    QPushButton *PushButton1;
    QPushButton *PushButton3;
    QLineEdit *Order;
    QLabel *TextLabel1;
    toHighlightedText *Criteria;
    QLabel *TextLabel1_2;
    QLabel *TextLabel2;
    toResultCols *Columns;
    QSpacerItem *spacerItem;
    QCheckBox *AllTables;

    void setupUi(QDialog *toResultContentFilterUI)
    {
    if (toResultContentFilterUI->objectName().isEmpty())
        toResultContentFilterUI->setObjectName(QString::fromUtf8("toResultContentFilterUI"));
    toResultContentFilterUI->resize(750, 480);
    actionCancel = new QAction(toResultContentFilterUI);
    actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
    gridLayout = new QGridLayout(toResultContentFilterUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    PushButton1 = new QPushButton(toResultContentFilterUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 4, 1, 1, 1);

    PushButton3 = new QPushButton(toResultContentFilterUI);
    PushButton3->setObjectName(QString::fromUtf8("PushButton3"));

    gridLayout->addWidget(PushButton3, 4, 2, 1, 1);

    Order = new QLineEdit(toResultContentFilterUI);
    Order->setObjectName(QString::fromUtf8("Order"));

    gridLayout->addWidget(Order, 3, 0, 1, 1);

    TextLabel1 = new QLabel(toResultContentFilterUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy);
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);

    Criteria = new toHighlightedText(toResultContentFilterUI);
    Criteria->setObjectName(QString::fromUtf8("Criteria"));
    Criteria->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(Criteria, 1, 0, 1, 1);

    TextLabel1_2 = new QLabel(toResultContentFilterUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    sizePolicy.setHeightForWidth(TextLabel1_2->sizePolicy().hasHeightForWidth());
    TextLabel1_2->setSizePolicy(sizePolicy);
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 1);

    TextLabel2 = new QLabel(toResultContentFilterUI);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    sizePolicy.setHeightForWidth(TextLabel2->sizePolicy().hasHeightForWidth());
    TextLabel2->setSizePolicy(sizePolicy);
    TextLabel2->setWordWrap(false);

    gridLayout->addWidget(TextLabel2, 0, 1, 1, 3);

    Columns = new toResultCols(toResultContentFilterUI);
    Columns->setObjectName(QString::fromUtf8("Columns"));

    gridLayout->addWidget(Columns, 1, 1, 3, 3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 4, 3, 1, 1);

    AllTables = new QCheckBox(toResultContentFilterUI);
    AllTables->setObjectName(QString::fromUtf8("AllTables"));

    gridLayout->addWidget(AllTables, 4, 0, 1, 1);

    TextLabel1->setBuddy(Criteria);
    TextLabel1_2->setBuddy(Order);
    TextLabel2->setBuddy(Columns);
    QWidget::setTabOrder(Criteria, Order);
    QWidget::setTabOrder(Order, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton3);

    retranslateUi(toResultContentFilterUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toResultContentFilterUI, SLOT(accept()));
    QObject::connect(PushButton3, SIGNAL(clicked()), toResultContentFilterUI, SLOT(reject()));
    QObject::connect(actionCancel, SIGNAL(triggered()), toResultContentFilterUI, SLOT(reject()));

    QMetaObject::connectSlotsByName(toResultContentFilterUI);
    } // setupUi

    void retranslateUi(QDialog *toResultContentFilterUI)
    {
    toResultContentFilterUI->setWindowTitle(QApplication::translate("toResultContentFilterUI", "Content editor filter settings", 0, QApplication::UnicodeUTF8));
    actionCancel->setText(QApplication::translate("toResultContentFilterUI", "cancel", 0, QApplication::UnicodeUTF8));
    actionCancel->setShortcut(QApplication::translate("toResultContentFilterUI", "Esc", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toResultContentFilterUI", "Ok", 0, QApplication::UnicodeUTF8));
    PushButton3->setText(QApplication::translate("toResultContentFilterUI", "Cancel", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1->setToolTip(QApplication::translate("toResultContentFilterUI", "Selection criteria to use getting items to edit. Same as after where in a select clause.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toResultContentFilterUI", "Selection &criteria", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1_2->setToolTip(QApplication::translate("toResultContentFilterUI", "The sort order to use when retreiving data from the database.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1_2->setText(QApplication::translate("toResultContentFilterUI", "Sort &order. Separate columns with comma.", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toResultContentFilterUI", "Available column names in table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toResultContentFilterUI", "Table &columns", 0, QApplication::UnicodeUTF8));
    AllTables->setText(QApplication::translate("toResultContentFilterUI", "Use for all tables", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toResultContentFilterUI);
    } // retranslateUi

};

namespace Ui {
    class toResultContentFilterUI: public Ui_toResultContentFilterUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TORESULTCONTENTFILTERUI_H
