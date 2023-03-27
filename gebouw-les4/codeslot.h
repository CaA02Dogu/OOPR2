#ifndef CODESLOT_H
#define CODESLOT_H

#include "slot.h"

using namespace std;

class CodeSlot : public Slot
{
public:
    CodeSlot(int);
    ~CodeSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(string);
    // QLineEdit* getInput();
    // virtual void qpaintEvent();

private:
    int key;
    bool closed;
    // QLineEdit* input;
};

#endif // CODESLOT_H
