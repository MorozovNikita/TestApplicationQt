/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *left_button_;
    QPushButton *right_button_;
    QPushButton *start_button_;
    QPushButton *about_button_;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(750, 481);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(640, 450));
        Widget->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourses/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resourses/images/name.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        left_button_ = new QPushButton(Widget);
        left_button_->setObjectName(QString::fromUtf8("left_button_"));
        left_button_->setMinimumSize(QSize(0, 34));
        left_button_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(left_button_);

        right_button_ = new QPushButton(Widget);
        right_button_->setObjectName(QString::fromUtf8("right_button_"));
        right_button_->setMinimumSize(QSize(0, 34));

        horizontalLayout->addWidget(right_button_);


        verticalLayout->addLayout(horizontalLayout);

        start_button_ = new QPushButton(Widget);
        start_button_->setObjectName(QString::fromUtf8("start_button_"));
        start_button_->setMinimumSize(QSize(0, 38));
        start_button_->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(start_button_);

        about_button_ = new QPushButton(Widget);
        about_button_->setObjectName(QString::fromUtf8("about_button_"));
        about_button_->setMinimumSize(QSize(0, 38));
        about_button_->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(about_button_);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(320, 320));
        tabWidget->setMaximumSize(QSize(320, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"border: none;\n"
"}\n"
"QTabWidget::pane{\n"
"border: 1px solid #222;\n"
"border-radius: 3px;\n"
"}\n"
"QTabWidget#tab{\n"
"	background: rgb(24, 30, 37);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(320, 320));
        tab->setMaximumSize(QSize(320, 320));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_12, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\275\320\276\320\273\320\270\320\272\320\270", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        left_button_->setText(QString());
        right_button_->setText(QString());
        start_button_->setText(QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        about_button_->setText(QCoreApplication::translate("Widget", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
