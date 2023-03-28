#include "drukbox.h"

Drukbox::Drukbox(QTextBrowser *browser): textb(browser)
{

}

void Drukbox::toonText(std::string tekst){
    textb->append(QString::fromStdString(tekst));
}

void Drukbox::clearMedium(){
    textb->clear();
}
