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
    virtual void voegIdKaartToe(shared_ptr<IdKaart>);
    virtual void verwijderIdKaart(std::string);
    virtual shared_ptr<IdKaart> returnId(string);
//    virtual static map<string, IdKaart*> returnMap();

private:
    string plaats;
    bool closed;
    static map<string, shared_ptr<IdKaart>> idKaarten;
};

#endif // KAARTSLOT_H
