#include<iostream>
#include <list>
#include <set>

using namespace std;

class Gra
{
    string wejscie;
    string wyjscie;
    string alfabet;
    int limit;
public:
    Gra();  // Constructor

    string zwrocWejscie();
    string zwrocWyjscie();
    int zwrocDlugoscWejscia();
    int zwrocDlugoscAlfabetu();
    int zwrocLimit();
    char zwrocLitereAlfabetu(int m);
};



