/********************************************************************************
** Form generated from reading ui file 'tomessageui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOMESSAGEUI_H
#define UI_TOMESSAGEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include "tomarkedtext.h"

QT_BEGIN_NAMESPACE

class Ui_toMessageUI
{
public:
    QGridLayout *gridLayout;
    toMarkedText *Message;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *toMessageUI)
    {
    if (toMessageUI->objectName().isEmpty())
        toMessageUI->setObjectName(QString::fromUtf8("toMessageUI"));
    toMessageUI->resize(411, 271);
    gridLayout = new QGridLayout(toMessageUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    Message = new toMarkedText(toMessageUI);
    Message->setObjectName(QString::fromUtf8("Message"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Message->sizePolicy().hasHeightForWidth());
    Message->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Message, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(toMessageUI);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


    retranslateUi(toMessageUI);

    QMetaObject::connectSlotsByName(toMessageUI);
    } // setupUi

    void retranslateUi(QDialog *toMessageUI)
    {
    toMessageUI->setWindowTitle(QApplication::translate("toMessageUI", "Warning message", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toMessageUI);
    } // retranslateUi

};

namespace Ui {
    class toMessageUI: public Ui_toMessageUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMESSAGEUI_H
