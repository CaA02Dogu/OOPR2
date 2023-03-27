#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>
#include <QPainter>
#include <QPen>
#include <list>

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
//    virtual list<shared_ptr<Slot>> giveAllSlot();
//    virtual shared_ptr<Slot> giveSlot(int);
//    virtual void addSlot(shared_ptr<Slot>);
//    virtual int slotIndex();
//    virtual void removeSlot();

private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned lengte;
//    list<shared_ptr<Slot>> slot;

};

#endif // DEUR_H
