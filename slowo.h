#include<iostream>
#include <list>

using namespace std;

class Slowo
{
    string slowo;

    //pointer do poprzedniego obiektu Slowo
    Slowo *pop;
public:
    Slowo(string slowo1);  // Constructor

    void wypiszSlowo();
    void wypiszPop();
    int czySlowoJestWSlowniku();

};
