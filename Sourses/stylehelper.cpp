#include "stylehelper.h"



QString StyleHelper::GetMainWidgetStyle()
{
    return "QWidget{"
           "    background-image: url(:/resourses/images/bg.png);"
           "}";
}

QString StyleHelper::GetStartButtonsStyle()
{
    return "QPushButton{"
           "   color:#fff;"
           "   background: none;"
           "   border: none;"
           "   border-radius: 19px;"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(6, 154, 209, 255), stop:1 rgba(0, 119, 187, 255));"
           "   font-family: 'Roboto Medium';"
           "   font-size: 16px;"
           "}"
           "QPushButton::hover{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(130, 187, 209, 255), stop:1 rgba(0, 153, 187, 255))"
           "}"
           "QPushButton::pressed{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 152, 209, 255), stop:1 rgba(0, 109, 133, 255))"
           "}"
        ;
}

QString StyleHelper::GetLeftButtonStile()
{
    return "QPushButton{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.965909, stop:0 rgba(39, 45, 57, 255), stop:1 rgba(39, 45, 57, 255));"
           "   background-image: url(:/resourses/images/cross_small.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "   border: 1px solid #333;"
           "   border-top-left-radius: 5px;"
           "   border-bottom-left-radius: 5px;"
           "}";
}

QString StyleHelper::GetRightButtonStile()
{
    return "QPushButton{"
           "   background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.965909, stop:0 rgba(39, 45, 57, 255), stop:1 rgba(39, 45, 57, 255));"
           "   background-image: url(:/resourses/images/zero_small.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "   border: 1px solid #333;"
           "   border-left: none;"
           "   border-top-right-radius: 5px;"
           "   border-bottom-right-radius: 5px;"
           "}";
}

QString StyleHelper::GetLeftButtonActiveStile()
{
    return "QPushButton{"
           "   background-color: #627290;"
           "   background-image: url(:/resourses/images/cross_small.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "   border: 1px solid #333;"
           "   border-top-left-radius: 5px;"
           "   border-bottom-left-radius: 5px;"
           "}";
}

QString StyleHelper::GetRightButtonActiveStile()
{
    return "QPushButton{"
           "   background-color: #627290;"
           "   background-image: url(:/resourses/images/zero_small.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "   border: 1px solid #333;"
           "   border-left: none;"
           "   border-top-right-radius: 5px;"
           "   border-bottom-right-radius: 5px;"
           "}";
}
