#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(hello()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::hello(){
    QMessageBox::about(this, "Yooooo", "Hello World");
}
