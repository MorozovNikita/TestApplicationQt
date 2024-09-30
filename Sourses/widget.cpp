#include "widget.h"
#include "ui_widget.h"

#include <QTabBar>
#include <QStyleOption>

#include "stylehelper.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320);
    ui->tabWidget->setCurrentIndex(0);
    SetInterfaceStyle();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);

    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);

    QWidget::paintEvent(event);
}

void Widget::SetInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::GetMainWidgetStyle());
    ui->start_button_->setStyleSheet(StyleHelper::GetStartButtonsStyle());
    ui->about_button_->setStyleSheet(StyleHelper::GetStartButtonsStyle());

    ui->left_button_->setStyleSheet(StyleHelper::GetLeftButtonStile());
    ui->right_button_->setStyleSheet(StyleHelper::GetRightButtonActiveStile());
}

void Widget::ChangeButtonStatus(int num)
{
    if(num == 1){
        ui->left_button_->setStyleSheet(StyleHelper::GetLeftButtonStile());
        ui->right_button_->setStyleSheet(StyleHelper::GetRightButtonActiveStile());
    }else{
        ui->left_button_->setStyleSheet(StyleHelper::GetLeftButtonActiveStile());
        ui->right_button_->setStyleSheet(StyleHelper::GetRightButtonStile());
    }
}

void Widget::on_left_button__clicked()
{
    ChangeButtonStatus(1);
}

void Widget::on_right_button__clicked()
{
    ChangeButtonStatus(0);
}

