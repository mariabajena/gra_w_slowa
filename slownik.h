#include<iostream>
#include <list>
#include <fstream>

using namespace std;

class Slownik
{
    string NazwaPliku;

public:
    Slownik(string sNazwaPliku);  // Constructor

    void wypiszNazwePliku();
    //
    int czySlowoJestWSlowniku (string slowo);
};
