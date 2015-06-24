#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "settings.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_UrlGo_clicked();

    void on_Settings_clicked();

    void on_pushButton_clicked();

    void on_WEB_loadProgress(int progress);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
