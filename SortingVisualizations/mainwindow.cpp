#include "mainwindow.h"
#include "sortfuncs.h"

using namespace std;
typedef chrono::high_resolution_clock Clock;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setup initial graph implementation
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(-1, 1);
    ui->customPlot->axisRect()->setupFullAxesBox();
    ui->customPlot->plotLayout()->insertRow(0);
    ui->customPlot->plotLayout()->addElement(0, 0, new QCPPlotTitle(ui->customPlot, "Sorting Results"));

    ui->customPlot->xAxis->setLabel("Numbers generated");
    ui->customPlot->yAxis->setLabel("Time to complete");

    // clicking on quick2 enables the insertion switch
    connect(ui->radio_quick2, SIGNAL(toggled(bool)), ui->spin_quick2, SLOT(setEnabled(bool)));

    // setup default values for spinboxes
    ui->spin_minNum->setValue(0);
    ui->spin_maxNum->setValue(32765);
    ui->spin_num2gen->setValue(10);

    // changes ids to more logical numbers
    //      (alphabetical for the most part;
                    //the 3 quick's are grouped at the bottom for readability)
    ui->btngroup_order->setId(ui->radio_asc, 1);
    ui->btngroup_order->setId(ui->radio_dec, 2);
    ui->btngroup_order->setId(ui->radio_rand, 3);
    ui->btngroup_order->setId(ui->radio_same, 4);

    ui->btngroup_sorting->setId(ui->radio_bubble, 1);
    ui->btngroup_sorting->setId(ui->radio_heap, 2);
    ui->btngroup_sorting->setId(ui->radio_insert, 3);
    ui->btngroup_sorting->setId(ui->radio_merge, 4);
    ui->btngroup_sorting->setId(ui->radio_selec, 5);
    ui->btngroup_sorting->setId(ui->radio_shell, 6);
    ui->btngroup_sorting->setId(ui->radio_quick1, 7);
    ui->btngroup_sorting->setId(ui->radio_quick2, 8);
    ui->btngroup_sorting->setId(ui->radio_quick3, 9);

    //init the random seed generator
    srand(time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// resets all input fields/graph info
void MainWindow::clearData()
{
    ui->field_preSort->clear();
    ui->field_postSort->clear();
    ui->customPlot->clearGraphs();
    x_genSize = {};
    y_genTime = {};
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(-1, 1);

    while (ui->table_prevData->rowCount() > 0)
        ui->table_prevData->removeRow(0);
}

// sets the class-wide variables to whatever the user inputted
void MainWindow::getUserInput()
{
    minNum = ui->spin_minNum->value();
    maxNum = ui->spin_maxNum->value();
    num2gen = ui->spin_num2gen->value();
    chosenSortID = ui->btngroup_sorting->checkedId();
    chosenOrderID = ui->btngroup_order->checkedId();

    // the first column in the "previous" table
    newCol0Data = num2gen;

    // appends the number to the x-axis vector
    x_genSize.push_back(num2gen);
}

// generates the list for the input data
vector<int> MainWindow::getList()
{
    // chosenOrderID 1 = ascending
    //               2 = descending
    //               3 = random order
    //               4 = single number

    // generate list of random integers
    vector<int> randList;
    for (int r = 0; r < num2gen ; r++)
    { //if 'single number' not selected or if is first element for 'single number'
        if (chosenOrderID != 4 || (chosenOrderID == 4 && r == 0))
        {
            randList.push_back(rand()%(maxNum-minNum + 1) + minNum);
        }
        else //from r=1 -> num2gen-1, set the value to the first randomly generated number
        {
            randList.push_back(randList[0]);
        }
    }

    // sort input data's list using std's methods - for speed, reliability
    //      (sort methods for this assignment are used for the output)
    if (chosenOrderID == 1)
    {
        sort(randList.begin(), randList.end());
    }
    else if (chosenOrderID == 2)
    {
        sort(randList.begin(), randList.end());
        reverse(randList.begin(), randList.end());
    }
    //cases 3 and 4 are already covered in the above for loop
        //(For 3, input is already inserted randomly)
        //(For 4, all data is the same)
    return randList;
}

// export to "Before sorting" text field
void MainWindow::printPreSortList(vector<int> randList)
{
    int counter = 0;
    for (vector<int>::iterator iter = randList.begin(); iter != randList.end(); iter++)
    { //if the number is not the last entry, inserts a comma after the number
        if (counter != num2gen-1)
            ui->field_preSort->insertPlainText(QString::number(*iter) + QString::fromStdString(", "));
        else //otherwise it just inserts the number
            ui->field_preSort->insertPlainText(QString::number(*iter));
        counter++;
    }
}

// export to "After sorting" text field
void MainWindow::printPostSortList(vector<int> randList)
{
    int counter = 0;
    for (vector<int>::iterator iter = randList.begin(); iter != randList.end(); iter++)
    { //if the number is not the last entry, inserts a comma after the number
        if (counter != num2gen-1)
            ui->field_postSort->insertPlainText(QString::number(*iter) + QString::fromStdString(", "));
        else //otherwise it just inserts the number
            ui->field_postSort->insertPlainText(QString::number(*iter));
        counter++;
    }
}

// inserts the number of items generated + the elapsed time into the table
void MainWindow::insertToTable()
{
    int numRows = ui->table_prevData->rowCount();

    //if row exists for item w/same number of nums to gen, then take average of two times
    for (int r = 0; r < numRows; r++)
    {
        QString content;
        content = ui->table_prevData->item(r,0)->text();

        if (content == QString::number(newCol0Data))
        {
            double currVal = ui->table_prevData->item(r, 1)->text().toDouble();
            double newVal = (currVal + newCol1Data) / 2;
            ui->table_prevData->item(r, 1)->setText(QString::number(newVal));
            return;
        }
    }

    // otherwise just add it to a new row
    ui->table_prevData->insertRow(numRows);

    // init the cells
    QTableWidgetItem *col0Data = new QTableWidgetItem();
    QTableWidgetItem *col1Data = new QTableWidgetItem();

    // sets the column 0 cell to the number of generated numbers
    col0Data->setText(QString::number(newCol0Data));
    ui->table_prevData->setItem(numRows, 0, col0Data);

    // sets the column 1 cell to the elapsed time
    col1Data->setText(QString::number(newCol1Data));
    ui->table_prevData->setItem(numRows, 1, col1Data);
}

//run the sorting function based on user selection and push the elapsed time into the vector
vector<int> MainWindow::parseSortInput(vector<int> v)
{

    LARGE_INTEGER frequency; // ticks per second
    LARGE_INTEGER t1, t2; // ticks @ start/end

    // get ticks per second
    QueryPerformanceFrequency(&frequency);

    // start timer
    QueryPerformanceCounter(&t1);



    //bub = 1; heap = 2; insert = 3; merge = 4; selection = 5; shell = 6; quick1,2,3 = 7,8,9
    SortFuncs sf;
    if (chosenSortID == 1)
        sf.bubble_sort(v);
    else if (chosenSortID == 2)
        sf.heap_sort(v);
    else if (chosenSortID == 3)
        sf.insert_sort(v);
    else if (chosenSortID == 4)
        sf.merge_sort(v);
    else if (chosenSortID == 5)
        sf.selection_sort(v);
    else if (chosenSortID == 6)
        sf.shell_sort(v);
    else if (chosenSortID == 7)
        sf.quick_sort1(v, 0, v.size()-1);
    else if (chosenSortID == 8)
        sf.quick_sort2(v, 0, v.size()-1, ui->spin_quick2->value());
    else if (chosenSortID == 9)
        sf.quick_sort3(v, 0, v.size());

    // stop timer
    QueryPerformanceCounter(&t2);

    // compute the elapsed time in milliseconds
    newCol1Data = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

    // add elapsed time to the time vector
    y_genTime.push_back(newCol1Data);

    return v;
}

// plotting the data in the graph
void MainWindow::plotData()
{
    double min_x = INT_MAX;
    double min_y = INT_MAX;
    double max_x = INT_MIN;
    double max_y = INT_MIN;


    // copying the vectors into Qvectors and finding the max and mins
    QVector<double> x(x_genSize.size()), y(x_genSize.size());
    for (int r = 0; r < ui->table_prevData->rowCount(); r++)
    {
        for (int c = 0; c < ui->table_prevData->columnCount(); c++)
        {
            double cellVal;
            try
            { // was causing crashes if the "generate/plot" button was spammed
                cellVal = ui->table_prevData->item(r, c)->text().toDouble();
            }
            catch (...)
            {
                cellVal = -1;
            }

            if (c == 0) //if value in first column (ie sizes)
            {
                if (cellVal > max_x) max_x = cellVal;
                if (cellVal < min_x) min_x = cellVal;
                x.push_back(cellVal);
            }
            else //values in second column (ie times)
            {
                if (cellVal > max_y) max_y = cellVal;
                if (cellVal < min_y) min_y = cellVal;
                y.push_back(cellVal);
            }
        }
    }


    //create graph and set limits
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, Qt::blue, Qt::white, 5));
    //plot the vectors
    ui->customPlot->graph(0)->setData(x,y);
    if (min_x == 0 && max_x == 0)
        ui->customPlot->xAxis->setRange(-0.5, 1);
    else
        ui->customPlot->xAxis->setRange(min_x*0.8, max_x*1.2);
    if (min_y == 0 && max_y == 0)
        ui->customPlot->yAxis->setRange(-0.5, 1);
    else
        ui->customPlot->yAxis->setRange(min_y*0.8, max_y*1.2);
    ui->customPlot->replot();

}

// the "main" of this code; runs whenever the user presses the "generate/plot data button"
void MainWindow::on_btn_genData_released()
{
    // get the sort method and order to generate numbers
    getUserInput();

    // clearing any existing information from the previous generation
    ui->field_preSort->clear();
    ui->field_postSort->clear();

    // gets the random list
    vector<int> randList = getList();

    // inputs the list into the "Before sorting" box,
    //      then sorts it (using the method chosen by the user), then puts it in the "After sorting" box
    printPreSortList(randList);
    vector<int> randList_sorted;
    randList_sorted = randList;
    randList_sorted = parseSortInput(randList_sorted);
    printPostSortList(randList_sorted);

    insertToTable();
    plotData();
}

// clears all the data
void MainWindow::on_btn_clearData_released()
{
    clearData();
    ui->customPlot->replot();
}

// settings the class-wide variables for the user-inputted options
void MainWindow::on_spin_minNum_valueChanged(const QString &arg1)
{
    if (arg1.toInt() > ui->spin_maxNum->value())
        ui->spin_minNum->setValue(ui->spin_maxNum->value());
    minNum = arg1.toInt(); //sets the minimum bound for the random number gen (inclusive)
}

void MainWindow::on_spin_maxNum_valueChanged(const QString &arg1)
{
    if (arg1.toInt() < ui->spin_minNum->value())
        ui->spin_maxNum->setValue(ui->spin_minNum->value());
    maxNum = arg1.toInt(); //sets the max bound (inclusive)
}

void MainWindow::on_spin_num2gen_valueChanged(const QString &arg1)
{
    num2gen = arg1.toInt(); //sets how many numbers to generate
}
