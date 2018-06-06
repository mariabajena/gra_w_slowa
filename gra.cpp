#include<iostream>
#include <list>
#include<fstream>
#include <set>
#include "gra.h"

using namespace std;

Gra::Gra()
{
    string wejscie1, wyjscie1;
    cout<<"Podaj wejscie: ";
    cin>> wejscie1;
    wejscie=wejscie1;
    cout<<"Podaj wyjscie: ";
    cin>>wyjscie1;
    wyjscie=wyjscie1;

    cout<<"Podaj limit krokow: ";
    int limit1;
    cin>>limit1;
    limit=limit1;

    alfabet="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVxXyYzZ";
}

string Gra::zwrocWejscie(){
    return wejscie;
}

string Gra::zwrocWyjscie(){
    return wyjscie;
}

int Gra::zwrocDlugoscWejscia(){
    return wejscie.length();
}

int Gra::zwrocDlugoscAlfabetu(){
    return alfabet.length();
}

int Gra::zwrocLimit(){
    return limit;
}

char Gra::zwrocLitereAlfabetu(int m){
    return alfabet[m];
}
