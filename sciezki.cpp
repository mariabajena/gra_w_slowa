#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include<vector>

#include "sciezki.h"

using namespace std;

ListaSciezek::ListaSciezek(string wejscie){
    vector<string> sciezka;
    sciezka.push_back(wejscie);
    listaSciezek.push_back(sciezka);
}

vector<string> ListaSciezek::stworzSciezkeDoSlowa(string slowo, int j){
    vector<string> nowaSciezka;
    nowaSciezka=listaSciezek[j];    //sciezka do tego slowa to sciezka do poprzedniego+slowo
    nowaSciezka.push_back(slowo);
    return nowaSciezka;
}

void ListaSciezek::dodajSciezkeDoListy(vector<string> nowaSciezka){
    listaSciezek.push_back(nowaSciezka);    //dopisuje sciezke do listy sciezek
}

int ListaSciezek::zwrocDlugoscListy(){
    return listaSciezek.size();
}

int ListaSciezek::zwrocDlugoscSciezki(int j){
    return listaSciezek[j].size();
}

vector<string> ListaSciezek::zwrocSciezke(int j){
    return listaSciezek[j];
}

void ListaSciezek::wypiszOstatniaSciezke(){
    vector<string> nowaSciezka;
    nowaSciezka=listaSciezek.back();
    vector<string>::iterator it;
    for(it=nowaSciezka.begin(); it!=nowaSciezka.end(); ++it)
        cout<<*it<<"->";
}

