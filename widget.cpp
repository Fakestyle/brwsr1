#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    reloadBtn = new QPushButton("Перезапустить");
    openBtn = new QPushButton("Перейти");
    urlLink = new QLineEdit();

    web = new QWidget();
    webView = new QWebView(this);
    webView->setUrl(QUrl("http://google.com"));

    childLt = new QHBoxLayout();
    childLt->addWidget(reloadBtn);
    childLt->addWidget(urlLink);
    childLt->addWidget(openBtn);

    mainLt = new QVBoxLayout();
    mainLt->addLayout(childLt);
    mainLt->addWidget(webView);

    setLayout(mainLt);
}

Widget::~Widget()
{
}

void Widget::on_UrlGo_clicked()
{
}

void Widget::on_Settings_clicked()
{

}

void Widget::on_pushButton_clicked()
{
}

void Widget::on_WEB_loadProgress(int progress)
{
}
