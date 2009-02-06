/********************************************************************************
** Form generated from reading ui file 'tohelpaddfileui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOHELPADDFILEUI_H
#define UI_TOHELPADDFILEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_toHelpAddFileUI
{
public:
    QGridLayout *gridLayout;
    QLineEdit *Filename;
    QPushButton *Browse;
    QLineEdit *Root;
    QFrame *Line1;
    QSpacerItem *spacerItem;
    QPushButton *PushButton2_2;
    QPushButton *OkButton;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;

    void setupUi(QDialog *toHelpAddFileUI)
    {
    if (toHelpAddFileUI->objectName().isEmpty())
        toHelpAddFileUI->setObjectName(QString::fromUtf8("toHelpAddFileUI"));
    toHelpAddFileUI->resize(434, 164);
    gridLayout = new QGridLayout(toHelpAddFileUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    Filename = new QLineEdit(toHelpAddFileUI);
    Filename->setObjectName(QString::fromUtf8("Filename"));

    gridLayout->addWidget(Filename, 3, 0, 1, 2);

    Browse = new QPushButton(toHelpAddFileUI);
    Browse->setObjectName(QString::fromUtf8("Browse"));

    gridLayout->addWidget(Browse, 3, 2, 1, 1);

    Root = new QLineEdit(toHelpAddFileUI);
    Root->setObjectName(QString::fromUtf8("Root"));

    gridLayout->addWidget(Root, 1, 0, 1, 3);

    Line1 = new QFrame(toHelpAddFileUI);
    Line1->setObjectName(QString::fromUtf8("Line1"));

    gridLayout->addWidget(Line1, 4, 0, 1, 3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 5, 0, 1, 1);

    PushButton2_2 = new QPushButton(toHelpAddFileUI);
    PushButton2_2->setObjectName(QString::fromUtf8("PushButton2_2"));

    gridLayout->addWidget(PushButton2_2, 5, 2, 1, 1);

    OkButton = new QPushButton(toHelpAddFileUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 5, 1, 1, 1);

    TextLabel1_2 = new QLabel(toHelpAddFileUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 3);

    TextLabel1 = new QLabel(toHelpAddFileUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 0, 0, 1, 3);

    TextLabel1_2->setBuddy(Root);
    TextLabel1->setBuddy(Root);
    QWidget::setTabOrder(Root, Filename);
    QWidget::setTabOrder(Filename, Browse);
    QWidget::setTabOrder(Browse, OkButton);
    QWidget::setTabOrder(OkButton, PushButton2_2);

    retranslateUi(toHelpAddFileUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toHelpAddFileUI, SLOT(accept()));
    QObject::connect(PushButton2_2, SIGNAL(clicked()), toHelpAddFileUI, SLOT(reject()));
    QObject::connect(Browse, SIGNAL(clicked()), toHelpAddFileUI, SLOT(browse()));
    QObject::connect(Root, SIGNAL(textChanged(QString)), toHelpAddFileUI, SLOT(valid()));
    QObject::connect(Filename, SIGNAL(textChanged(QString)), toHelpAddFileUI, SLOT(valid()));

    QMetaObject::connectSlotsByName(toHelpAddFileUI);
    } // setupUi

    void retranslateUi(QDialog *toHelpAddFileUI)
    {
    toHelpAddFileUI->setWindowTitle(QApplication::translate("toHelpAddFileUI", "Add help directory", 0, QApplication::UnicodeUTF8));
    Browse->setText(QApplication::translate("toHelpAddFileUI", "&Browse", 0, QApplication::UnicodeUTF8));
    PushButton2_2->setText(QApplication::translate("toHelpAddFileUI", "Cancel", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toHelpAddFileUI", "&Ok", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toHelpAddFileUI", "&Table of contents file", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toHelpAddFileUI", "&Title", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toHelpAddFileUI);
    } // retranslateUi

};

namespace Ui {
    class toHelpAddFileUI: public Ui_toHelpAddFileUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOHELPADDFILEUI_H
