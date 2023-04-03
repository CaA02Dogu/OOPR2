#ifndef KAARTSLOT_H
#define KAARTSLOT_H

#include <string>
#include <map>
#include "slot.h"

class KaartSlot : public Slot
{
public:
    KaartSlot(std::string);
    ~KaartSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(std::string);
    virtual void voegIdKaartToe(IdKaart*);
    virtual void verwijderIdKaart(std::string);
    virtual IdKaart* returnId(string);

private:
    string plaats;
    bool closed;
    map<string, IdKaart*> idKaarten;
};

#endif // KAARTSLOT_H
