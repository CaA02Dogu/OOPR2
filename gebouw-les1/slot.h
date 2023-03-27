#ifndef SLOT_H
#define SLOT_H

#include<string>
#include<memory>
#include <map>
#include <QLineEdit>

using namespace std;

class Slot
{
public:
    Slot();
    virtual void ontgrendel(string) = 0;
    virtual void vergrendel() = 0;
    virtual bool isVergrendeld() = 0;
    virtual QLineEdit* getInput() = 0;
    virtual void qpaintEvent() = 0;

};

#endif // SLOT_H
