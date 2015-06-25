#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    createForm();
    connectSignalWithSlots();
}

Widget::~Widget()
{
}

void Widget::createForm()
{
    reloadBtn = new QPushButton("Обновить");
    openBtn = new QPushButton("Перейти");
    urlLink = new QLineEdit();
    urlLink->setText("google.com");

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

void Widget::connectSignalWithSlots()
{
    connect(reloadBtn, SIGNAL(clicked(bool)), webView, SLOT(reload()));
    connect(openBtn, SIGNAL(clicked(bool)), this, SLOT(openPage()));
    connect(urlLink, SIGNAL(returnPressed()), this, SLOT(openPage()));
}

void Widget::openPage()
{
    webView->setUrl(urlLink->text());
}
