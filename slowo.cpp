#include<iostream>
#include <list>
#include "slowo.h"

using namespace std;

Slowo::Slowo(string slowo1)
{
    slowo=slowo1;
    pop=NULL;
}

void Slowo::wypiszSlowo(){
    cout<<slowo<<endl;
}

void Slowo::wypiszPop(){
    cout<<pop->slowo<<endl;
}
