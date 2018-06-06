#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include<vector>

using namespace std;

class Zbior
{
    string nazwa;
    set<string> zbior;

public:
    Zbior(string nazwaZbioru);

    bool szukajWZbiorze(string slowo);
    set<string> wczytajSlownik(std::string sNazwaPliku, string wejscie);
    void dodajDoZbioru(string slowo);
    void wypiszZbior();
};

