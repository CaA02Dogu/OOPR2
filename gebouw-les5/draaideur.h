#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H

#include "deur.h"

class QPaintDevice;

class Draaideur : public Deur
{
public:
    Draaideur(bool, bool, int, int, unsigned);
    virtual void teken(QPaintDevice *);

private:
    bool liggend;
};

#endif // DRAAIDEUR_H
