#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextBrowser>
#include <QString>
#include <QImage>
#include <memory>
#include <vector>
#include "sensor.h"
#include "schuifdeur.h"
#include "draaideur.h"
#include "hallsensor.h"
#include "sleutelslot.h"
#include "codeslot.h"
#include "herkenningsslot.h"
#include "drukbox.h"
#include "kaartslot.h"
#include "idkaart.h"

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
    void on_AP_clicked();
    void on_AN_clicked();
    void on_ToonKaart_clicked();
    void on_ID_clicked();
    void on_ID_remove_clicked();
    void on_ID_Register_clicked();
    void on_ID_RemoveSlot_clicked();

private:
    shared_ptr<Ui::MainWindow> ui;
    shared_ptr<Sensor> s1;
    shared_ptr<Afdrukker> af;
    vector<shared_ptr<Deur>> door;
    vector<shared_ptr<Slot>> lock;
    vector<shared_ptr<IdKaart>> idkaarten;
};

#endif // MAINWINDOW_H
