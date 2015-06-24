#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect (ui->Back, SIGNAL(clicked()), ui->WEB, SLOT(back()));
    connect (ui->Forward, SIGNAL(clicked()), ui->WEB, SLOT(forward()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_UrlGo_clicked()
{

    if(!(ui->Url_string->text().startsWith("http://")))
        {
           // ui->WEB->load(QUrl("http://" + ui->Url_string->text()));
         ui->WEB->load("http://" + ui->Url_string->text());
       }
    if(!(ui->Url_string->text().endsWith(".com")))

       {
        ui->WEB->load("http://www.google.com/cse?q=" + ui->Url_string->text());
       }
}

void Widget::on_Settings_clicked()
{

}

void Widget::on_pushButton_clicked()
{
    ui->WEB->reload(); //Обновление страницы
}

void Widget::on_WEB_loadProgress(int progress)
{
    //ui->progressLoad->showtext("Загрузка "+ui->WEB->url().toString()+"...",500);
}
