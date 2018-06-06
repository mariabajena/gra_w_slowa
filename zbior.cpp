#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include<vector>

#include "zbior.h"

using namespace std;

Zbior::Zbior(string nazwaZbioru)
{
    nazwa=nazwaZbioru;
    set<string> pustyZbior;
    zbior=pustyZbior;
}

bool Zbior::szukajWZbiorze(string slowo){
    set<string>::iterator result;   //iteratory

    result = zbior.find(slowo);
    if( result!=zbior.end() ){
      return true;
    }
    else return false;
}

set<string> Zbior::wczytajSlownik(std::string sNazwaPliku, string wejscie){
    std::string wiersz;

    std::ifstream plik;
    plik.open( sNazwaPliku.c_str() );

    cout<<"Poczatek wczytywania slownika"<<endl;
    while( std::getline( plik, wiersz ) ){
        if(wiersz.length()==wejscie.length()){
          zbior.insert(wiersz);
        }
    }
    cout<<"Koniec wczytywania slownika"<<endl;

    plik.close();
    return zbior;
}

void Zbior::dodajDoZbioru(string slowo){
    zbior.insert(slowo);
}

void Zbior::wypiszZbior(){
    set<string>::iterator it;
 //wypisuje zbior
    for( it=zbior.begin(); it!=zbior.end(); ++it)
      cout << *it<< '\n';
}
