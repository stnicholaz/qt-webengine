//#BEGINYg6egVO0oM1PSyioQJhWdg==END#
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView* webView;

public:
    void createWebEngineView();
    void loadURL(const QString& url);
    void resizeEvent(QResizeEvent* event);
};

#endif // MAINWINDOW_H
