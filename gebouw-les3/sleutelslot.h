#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"
#include <iostream>


using namespace std;

class SleutelSlot : public Slot
{
public:
    SleutelSlot(string);
    ~SleutelSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(string);
    // QLineEdit* getInput();
    // virtual void qpaintEvent();

private:
    string key;
    bool closed;
    // QLineEdit* input;
};

#endif // SLEUTELSLOT_H
