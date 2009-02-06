/********************************************************************************
** Form generated from reading ui file 'topreferencesui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOPREFERENCESUI_H
#define UI_TOPREFERENCESUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_toPreferencesUI
{
public:
    QGridLayout *gridLayout;
    QListWidget *TabSelection;
    QFrame *Parent;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *HelpButton;
    QSpacerItem *spacerItem;
    QPushButton *PushButton2_2;
    QPushButton *PushButton1;
    QPushButton *PushButton2;

    void setupUi(QDialog *toPreferencesUI)
    {
    if (toPreferencesUI->objectName().isEmpty())
        toPreferencesUI->setObjectName(QString::fromUtf8("toPreferencesUI"));
    toPreferencesUI->resize(588, 480);
    gridLayout = new QGridLayout(toPreferencesUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    TabSelection = new QListWidget(toPreferencesUI);
    TabSelection->setObjectName(QString::fromUtf8("TabSelection"));
    QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TabSelection->sizePolicy().hasHeightForWidth());
    TabSelection->setSizePolicy(sizePolicy);
    TabSelection->setMinimumSize(QSize(150, 0));

    gridLayout->addWidget(TabSelection, 0, 0, 1, 1);

    Parent = new QFrame(toPreferencesUI);
    Parent->setObjectName(QString::fromUtf8("Parent"));
    Parent->setFrameShape(QFrame::NoFrame);
    Parent->setFrameShadow(QFrame::Plain);
    vboxLayout = new QVBoxLayout(Parent);
    vboxLayout->setSpacing(0);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);

    gridLayout->addWidget(Parent, 0, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    HelpButton = new QPushButton(toPreferencesUI);
    HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
    QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(HelpButton->sizePolicy().hasHeightForWidth());
    HelpButton->setSizePolicy(sizePolicy1);

    hboxLayout->addWidget(HelpButton);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    PushButton2_2 = new QPushButton(toPreferencesUI);
    PushButton2_2->setObjectName(QString::fromUtf8("PushButton2_2"));

    hboxLayout->addWidget(PushButton2_2);

    PushButton1 = new QPushButton(toPreferencesUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    hboxLayout->addWidget(PushButton1);

    PushButton2 = new QPushButton(toPreferencesUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    hboxLayout->addWidget(PushButton2);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

    QWidget::setTabOrder(TabSelection, HelpButton);
    QWidget::setTabOrder(HelpButton, PushButton2_2);
    QWidget::setTabOrder(PushButton2_2, PushButton1);
    QWidget::setTabOrder(PushButton1, PushButton2);

    retranslateUi(toPreferencesUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toPreferencesUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toPreferencesUI, SLOT(reject()));
    QObject::connect(TabSelection, SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)), toPreferencesUI, SLOT(selectTab(QListWidgetItem*)));
    QObject::connect(HelpButton, SIGNAL(clicked()), toPreferencesUI, SLOT(help()));
    QObject::connect(PushButton2_2, SIGNAL(clicked()), toPreferencesUI, SLOT(saveSetting()));

    QMetaObject::connectSlotsByName(toPreferencesUI);
    } // setupUi

    void retranslateUi(QDialog *toPreferencesUI)
    {
    toPreferencesUI->setWindowTitle(QApplication::translate("toPreferencesUI", "Preferences", 0, QApplication::UnicodeUTF8));
    HelpButton->setText(QApplication::translate("toPreferencesUI", "&Help", 0, QApplication::UnicodeUTF8));
    HelpButton->setShortcut(QApplication::translate("toPreferencesUI", "Alt+H", 0, QApplication::UnicodeUTF8));
    PushButton2_2->setText(QApplication::translate("toPreferencesUI", "Apply", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toPreferencesUI", "&Ok", 0, QApplication::UnicodeUTF8));
    PushButton1->setShortcut(QApplication::translate("toPreferencesUI", "Alt+O", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toPreferencesUI", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toPreferencesUI);
    } // retranslateUi

};

namespace Ui {
    class toPreferencesUI: public Ui_toPreferencesUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPREFERENCESUI_H
