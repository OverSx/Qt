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
        if(summ == 0){
            ui->lbResult->setText(QString("Введите корректные значения!"));
        }
        else{
        int i = ui->comboBoxRUB->currentIndex();
        int j = ui->comboBoxEURO->currentIndex();
        double p, changedSumm;
        switch(i){
        case 0:
            switch(j){
            case 0:
                p=1;
                break;
            case 1:
                p = 0.013;
                break;
            case 2:
                p = 0.012;
                break;
            case 3:
                p = 0.015;
                break;
            default:
                break;
            }
            changedSumm = p * summ;
            break;
         case 1:
                switch(j){
                case 0:
                    p = 75.95;
                    break;
                case 1:
                    p = 1;
                    break;
                case 2:
                    p = 0.88;
                    break;
                case 3:
                    p = 1.14;
                    break;
                default:
                    break;
                }
                changedSumm = p * summ;
            break;
          case 2:
                      switch(j){
                       case 0:
                           p = 84.45;
                          break;
                       case 1:
                           p = 1.13;
                          break;
                       case 2:
                           p =1;
                           break;
                       case 3:
                           p = 1.28;
                          break;
                       default:
                           break;
                       }
                      changedSumm = p * summ;
            break;
            case 3:
                                  switch(j){
                                   case 0:
                                       p = 66.88;
                                      break;
                                   case 1:
                                       p = 0.88;
                                      break;
                                   case 2:
                                       p = 0.78;
                                      break;
                                   case 3:
                                       p = 1;
                                       break;
                                   default:
                                       break;
                                   }
                                  changedSumm = p * summ;
            break;
    }
            ui->lbResult->setText(QString("%1").arg(changedSumm));
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

