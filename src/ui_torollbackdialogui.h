/********************************************************************************
** Form generated from reading ui file 'torollbackdialogui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOROLLBACKDIALOGUI_H
#define UI_TOROLLBACKDIALOGUI_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toRollbackDialogUI
{
public:
    QGridLayout *gridLayout;
    QToolButton *ToolButton1;
    QTabWidget *DialogTabs;
    QWidget *DefaultPage;
    QGridLayout *gridLayout1;
    QCheckBox *Public;
    QLabel *TextLabel1;
    QComboBox *Tablespace;
    QLineEdit *Name;
    QLabel *TextLabel2;
    QSpacerItem *Spacer3;
    QPushButton *OkButton;
    QPushButton *PushButton2;
    QSpacerItem *Spacer2;
    QSpacerItem *Spacer1;

    void setupUi(QDialog *toRollbackDialogUI)
    {
    if (toRollbackDialogUI->objectName().isEmpty())
        toRollbackDialogUI->setObjectName(QString::fromUtf8("toRollbackDialogUI"));
    toRollbackDialogUI->resize(556, 480);
    gridLayout = new QGridLayout(toRollbackDialogUI);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    ToolButton1 = new QToolButton(toRollbackDialogUI);
    ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
    ToolButton1->setIcon(qt_get_icon(image0_ID));

    gridLayout->addWidget(ToolButton1, 3, 2, 1, 1);

    DialogTabs = new QTabWidget(toRollbackDialogUI);
    DialogTabs->setObjectName(QString::fromUtf8("DialogTabs"));
    DefaultPage = new QWidget();
    DefaultPage->setObjectName(QString::fromUtf8("DefaultPage"));
    gridLayout1 = new QGridLayout(DefaultPage);
#ifndef Q_OS_MAC
    gridLayout1->setSpacing(6);
#endif
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    Public = new QCheckBox(DefaultPage);
    Public->setObjectName(QString::fromUtf8("Public"));
    Public->setChecked(true);

    gridLayout1->addWidget(Public, 4, 0, 1, 1);

    TextLabel1 = new QLabel(DefaultPage);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 0, 0, 1, 1);

    Tablespace = new QComboBox(DefaultPage);
    Tablespace->setObjectName(QString::fromUtf8("Tablespace"));

    gridLayout1->addWidget(Tablespace, 3, 0, 1, 1);

    Name = new QLineEdit(DefaultPage);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout1->addWidget(Name, 1, 0, 1, 1);

    TextLabel2 = new QLabel(DefaultPage);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2, 2, 0, 1, 1);

    Spacer3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(Spacer3, 5, 0, 1, 1);

    DialogTabs->addTab(DefaultPage, QString());

    gridLayout->addWidget(DialogTabs, 0, 0, 4, 1);

    OkButton = new QPushButton(toRollbackDialogUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(OkButton->sizePolicy().hasHeightForWidth());
    OkButton->setSizePolicy(sizePolicy);
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 0, 1, 1, 2);

    PushButton2 = new QPushButton(toRollbackDialogUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));
    sizePolicy.setHeightForWidth(PushButton2->sizePolicy().hasHeightForWidth());
    PushButton2->setSizePolicy(sizePolicy);

    gridLayout->addWidget(PushButton2, 1, 1, 1, 2);

    Spacer2 = new QSpacerItem(71, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

    gridLayout->addItem(Spacer2, 3, 1, 1, 1);

    Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(Spacer1, 2, 2, 1, 1);

    TextLabel1->setBuddy(Name);
    TextLabel2->setBuddy(Tablespace);
    QWidget::setTabOrder(DialogTabs, OkButton);
    QWidget::setTabOrder(OkButton, PushButton2);

    retranslateUi(toRollbackDialogUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toRollbackDialogUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toRollbackDialogUI, SLOT(reject()));
    QObject::connect(ToolButton1, SIGNAL(clicked()), toRollbackDialogUI, SLOT(displaySQL()));
    QObject::connect(Name, SIGNAL(textChanged(QString)), toRollbackDialogUI, SLOT(valueChanged(QString)));

    QMetaObject::connectSlotsByName(toRollbackDialogUI);
    } // setupUi

    void retranslateUi(QDialog *toRollbackDialogUI)
    {
    toRollbackDialogUI->setWindowTitle(QApplication::translate("toRollbackDialogUI", "Modify tablespace", 0, QApplication::UnicodeUTF8));
    ToolButton1->setText(QString());

#ifndef QT_NO_TOOLTIP
    ToolButton1->setToolTip(QApplication::translate("toRollbackDialogUI", "Display the SQL used to generate the specified object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Public->setText(QApplication::translate("toRollbackDialogUI", "&Public", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Public->setToolTip(QApplication::translate("toRollbackDialogUI", "If this should be a publicly available rollback segment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1->setText(QApplication::translate("toRollbackDialogUI", "&Name", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toRollbackDialogUI", "&Tablespace", 0, QApplication::UnicodeUTF8));
    DialogTabs->setTabText(DialogTabs->indexOf(DefaultPage), QApplication::translate("toRollbackDialogUI", "Rollback Segment", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toRollbackDialogUI", "&Ok", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toRollbackDialogUI", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toRollbackDialogUI);
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
    class toRollbackDialogUI: public Ui_toRollbackDialogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOROLLBACKDIALOGUI_H
