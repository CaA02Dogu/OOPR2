#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include "deur.h"
#include "sensor.h"

class QPaintDevice;

class Schuifdeur : public Deur
{
public:
    Schuifdeur(bool, int, int, unsigned, shared_ptr<Sensor>);
    virtual void teken(QPaintDevice*);
    virtual void sluit();

private:
    shared_ptr<Sensor> seniorita;
};

#endif // SCHUIFDEUR_H
