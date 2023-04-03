#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <string>

using namespace std;

class KaartSlot;

class SlotException
{
public:
    SlotException();
    string kaartVanBinnenringer();
    string plaatsVanHetSlot();

private:
    string kaartId;
    string slotPlaats;
};

#endif // SLOTEXCEPTION_H
