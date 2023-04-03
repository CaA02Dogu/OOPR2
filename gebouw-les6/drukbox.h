#ifndef DRUKBOX_H
#define DRUKBOX_H

#include <memory>
#include <QTextBrowser>
#include "afdrukker.h"

class Drukbox : public Afdrukker
{
public:
    Drukbox(QTextBrowser *browser);
    virtual void toonText(std::string tekst);
    virtual void clearMedium();

private:
    QTextBrowser *textb;
};

#endif // DRUKBOX_H
