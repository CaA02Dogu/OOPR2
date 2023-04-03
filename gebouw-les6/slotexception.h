#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include "idkaart.h"
#include <string>
#include <memory>

using namespace std;

class IdKaart;

class SlotException
{
public:
    SlotException(shared_ptr<IdKaart>, string);
    virtual ~SlotException();
    virtual string kaartVanBinnendringer();
    virtual string plaatsVanHetSlot();

private:
    string kaartId;
    string slotPlaats;
};

#endif // SLOTEXCEPTION_H
