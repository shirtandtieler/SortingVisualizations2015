#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <climits>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //init funcs for my functions
    void clearData();
    void getUserInput();
    std::vector<int> getList();
    void printPreSortList(std::vector<int> list);
    void printPostSortList(std::vector<int> list);
    void insertToTable();
    std::vector<int> parseSortInput(std::vector<int> v);
    void plotData();

    //init funcs for qt widgets
    void on_btn_genData_released();
    void on_spin_minNum_valueChanged(const QString &arg1);
    void on_spin_maxNum_valueChanged(const QString &arg1);
    void on_spin_num2gen_valueChanged(const QString &arg1);
    void on_btn_clearData_released();


private: //init ui and my vars
    int minNum, maxNum, num2gen;
    int chosenSortID;
    int chosenOrderID;
    int newCol0Data; //amount of numbers generated
    double newCol1Data; //elapsed time
    std::vector<double> x_genSize; //the numbers specified in the generator (aka x axis)
    std::vector<double> y_genTime; //the times for the sort function to run (aka y axis)
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
