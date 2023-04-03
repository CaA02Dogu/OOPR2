#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include "slot.h"

class HerkenningsSlot : public Slot
{
public:
    HerkenningsSlot(shared_ptr<Afdrukker>);
    ~HerkenningsSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(string);
    virtual void toonKaartenbak();
    virtual void voegAutorisatieToe(string, bool);


private:
    map<string, bool> kaartenbak;
    shared_ptr<Afdrukker> afdrukker;
    bool closed;
};

#endif // HERKENNINGSSLOT_H
