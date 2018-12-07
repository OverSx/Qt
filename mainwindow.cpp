#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_btGO_clicked()
{
        double summ = ui->lineEditSUM->text().toDouble();
        double array[4][4] = {{1,0.013,0.012,0.015},{75.95,1, 0.88, 1.14},
                              {84.45, 1.13, 1, 1.28},{66.88, 0.88, 0.78, 1}};
        if(summ == 0){
            ui->lbResult->setText(QString("Введите корректные значения!"));
        }
        else{
        int i = ui->comboBoxRUB->currentIndex();
        int j = ui->comboBoxEURO->currentIndex();
        double p, changedSumm;
        p = array[i][j];
        changedSumm = summ*p;
            ui->lbResult->setText(QString("%1").arg(changedSumm));
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

