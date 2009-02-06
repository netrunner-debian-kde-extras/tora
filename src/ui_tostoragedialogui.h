/********************************************************************************
** Form generated from reading ui file 'tostoragedialogui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSTORAGEDIALOGUI_H
#define UI_TOSTORAGEDIALOGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toStorageDialogUI
{
public:
    QGridLayout *gridLayout;
    QToolButton *ToolButton1;
    QTabWidget *DialogTab;
    QWidget *DefaultPage;
    QPushButton *OkButton;
    QPushButton *PushButton2;
    QSpacerItem *Spacer2;
    QSpacerItem *Spacer1;

    void setupUi(QDialog *toStorageDialogUI)
    {
    if (toStorageDialogUI->objectName().isEmpty())
        toStorageDialogUI->setObjectName(QString::fromUtf8("toStorageDialogUI"));
    toStorageDialogUI->resize(576, 480);
    gridLayout = new QGridLayout(toStorageDialogUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    ToolButton1 = new QToolButton(toStorageDialogUI);
    ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
    ToolButton1->setIcon(qt_get_icon(image0_ID));

    gridLayout->addWidget(ToolButton1, 3, 2, 1, 1);

    DialogTab = new QTabWidget(toStorageDialogUI);
    DialogTab->setObjectName(QString::fromUtf8("DialogTab"));
    DefaultPage = new QWidget();
    DefaultPage->setObjectName(QString::fromUtf8("DefaultPage"));
    DialogTab->addTab(DefaultPage, QString());

    gridLayout->addWidget(DialogTab, 0, 0, 4, 1);

    OkButton = new QPushButton(toStorageDialogUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(OkButton->sizePolicy().hasHeightForWidth());
    OkButton->setSizePolicy(sizePolicy);
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 0, 1, 1, 2);

    PushButton2 = new QPushButton(toStorageDialogUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));
    sizePolicy.setHeightForWidth(PushButton2->sizePolicy().hasHeightForWidth());
    PushButton2->setSizePolicy(sizePolicy);

    gridLayout->addWidget(PushButton2, 1, 1, 1, 2);

    Spacer2 = new QSpacerItem(71, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

    gridLayout->addItem(Spacer2, 3, 1, 1, 1);

    Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer1, 2, 2, 1, 1);

    QWidget::setTabOrder(DialogTab, OkButton);
    QWidget::setTabOrder(OkButton, PushButton2);

    retranslateUi(toStorageDialogUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toStorageDialogUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toStorageDialogUI, SLOT(reject()));
    QObject::connect(ToolButton1, SIGNAL(clicked()), toStorageDialogUI, SLOT(displaySQL()));

    QMetaObject::connectSlotsByName(toStorageDialogUI);
    } // setupUi

    void retranslateUi(QDialog *toStorageDialogUI)
    {
    toStorageDialogUI->setWindowTitle(QApplication::translate("toStorageDialogUI", "Modify tablespace", 0, QApplication::UnicodeUTF8));
    ToolButton1->setText(QString());

#ifndef QT_NO_TOOLTIP
    ToolButton1->setToolTip(QApplication::translate("toStorageDialogUI", "Display the SQL used to generate the specified object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    DialogTab->setTabText(DialogTab->indexOf(DefaultPage), QApplication::translate("toStorageDialogUI", "Tab 2", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toStorageDialogUI", "&Ok", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toStorageDialogUI", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toStorageDialogUI);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const char* const image0_data[] = { 
"16 16 14 1",
". c None",
"# c #000000",
"i c #181841",
"e c #20205a",
"k c #202462",
"c c #292873",
"l c #292c7b",
"h c #313083",
"b c #393cac",
"d c #4140b4",
"f c #4a4ccd",
"j c #5a59f6",
"g c #5a5df6",
"a c #5a5dff",
"................",
".###..###..##...",
"#..#.#..#..#....",
"##...#...#.#....",
"..#..#####.#....",
"...#.#aab#.#....",
"#..##cdaef##..#.",
".##.#ghiha#####.",
"....#aajkl#.....",
".....#aaa#......",
"......#####.....",
".........###....",
"..........###...",
"...........##...",
"................",
"................"};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class toStorageDialogUI: public Ui_toStorageDialogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSTORAGEDIALOGUI_H
