#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QWebView>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    QWidget *web;
    QWebView *webView;
    QPushButton *reloadBtn;
    QPushButton *openBtn;
    QLineEdit *urlLink;
    QHBoxLayout *childLt;
    QVBoxLayout *mainLt;
    void createForm();

private slots:
    void on_UrlGo_clicked();

    void on_Settings_clicked();

    void on_pushButton_clicked();

    void on_WEB_loadProgress(int progress);
};

#endif // WIDGET_H
