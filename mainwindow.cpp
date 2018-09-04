#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1024,700);

    createWebEngineView();
    this->loadURL("http://www.baidu.com/");
}

void MainWindow::createWebEngineView()
{
    webView = new QWebEngineView(ui->centralWidget);
    webView->resize(this->size());
    webView->show();

}
void MainWindow::loadURL(const QString& url)
{
    webView->load(QUrl(url));
}
void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);
    webView->resize(this->size());
}

MainWindow::~MainWindow()
{
    delete ui;
}
