#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include<vector>

using namespace std;

class ListaSciezek
{
    vector<vector<string> > listaSciezek;
public:
    ListaSciezek(string wejscie);

    vector<string> stworzSciezkeDoSlowa(string slowo, int j);
    void dodajSciezkeDoListy(vector<string> nowaSciezka);
    vector<string> zwrocSciezke(int j);
    int zwrocDlugoscListy();
    int zwrocDlugoscSciezki(int j);
    void wypiszOstatniaSciezke();
};
