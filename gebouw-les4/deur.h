#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>
#include <QPainter>
#include <QPen>
#include <list>
#include "slot.h"

using namespace std;

class QPaintDevice;

class Deur
{
public:
    Deur(bool, int, int , unsigned);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *) = 0;
    virtual bool isDeurOpen();
    virtual std::pair<int,int> coordinaten() const;
    virtual unsigned int returnLength() const;
    virtual void addSlot(shared_ptr<Slot>);
    virtual shared_ptr<Slot> getSlot(int);
    virtual int getSlotIndex();
//    virtual int slotIndex();
//    virtual void removeSlot();

private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned lengte;
    vector<shared_ptr<Slot>> slot;
//    list<shared_ptr<Slot>> slot;

};

#endif // DEUR_H
