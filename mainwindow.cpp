#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

class mistake_exception{};

void MainWindow::on_btGO_clicked()
{
        bool ok;
        double array[4][4] = {{1,0.013,0.012,0.015},{75.95,1, 0.88, 1.14},
                              {84.45, 1.13, 1, 1.28},{66.88, 0.88, 0.78, 1}};
        double summ = ui->lineEditSUM->text().toDouble(&ok);
        if (ok){
            int i = ui->comboBoxRUB->currentIndex();
            int j = ui->comboBoxEURO->currentIndex();
            double p, changedSumm;
            p = array[i][j];
            changedSumm = summ*p;
                ui->lbResult->setText(QString("%1").arg(changedSumm));
        } else {
            ui->lbResult->setText("Введите корректные значения!");
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}

