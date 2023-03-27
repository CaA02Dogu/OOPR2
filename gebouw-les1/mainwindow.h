#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextBrowser>
#include <memory>
#include <vector>
#include "hallsensor.h"
#include "schuifdeur.h"
#include "draaideur.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
      ~MainWindow();

private slots:
    void on_sensor_act_clicked();
    void on_schuifdeurKnop_clicked();
    void on_deur_1_clicked();
    void on_deur_2_clicked();

private:
    shared_ptr<Ui::MainWindow> ui;
    shared_ptr<Sensor> s1;
    vector<shared_ptr<Deur>> door;
};

#endif // MAINWINDOW_H
