#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include<vector>

#include "sciezki.h"
#include "zbior.h"
#include "gra.h"

using namespace std;

//test gier
//polka golas
//trapez parter
//kolej zatem
//podaj limit
//szafa klops
//kroki pasza
//siadaj fajnie
//latem metal
//sesja nauka
//jajo kura
//marzec garncu

//ZWIAZKI FRAZEOLOGICZNE
//baba jaga
//babskie gadanie
//blady kreda
//damski bokser
//hulaj dusza
//konik polny
//kula nogi
//twarda sztuka
//ubaw pach
//wilcze bilety
//wszem wobec
//wzloty upadki
//zielona granica
//zimny palec
//czas leci
//krowa mleko

int main()
{
   Gra gra;

   Zbior slownik("slownik");
   slownik.wczytajSlownik("slownik.txt", gra.zwrocWejscie());


    //tworze zbior juz znalezionych slow
    Zbior znalezione("znalezione");
    znalezione.dodajDoZbioru(gra.zwrocWejscie());     //umieszczam w nim wejscie

    ListaSciezek listaSciezek(gra.zwrocWejscie());

    string slowo;

    for(int i=1; i<gra.zwrocLimit(); i++) {
        for(int j=0; j<listaSciezek.zwrocDlugoscListy(); ++j){
          if(listaSciezek.zwrocDlugoscSciezki(j)==(i-1))
            {
                for(int k=0; k<gra.zwrocDlugoscWejscia(); k++){
                    slowo=listaSciezek.zwrocSciezke(j).back();
                    for(int m=0; m<gra.zwrocDlugoscAlfabetu(); m++){
                        slowo[k]=gra.zwrocLitereAlfabetu(m);
                        if(!(znalezione.szukajWZbiorze(slowo))){
                                    if(slownik.szukajWZbiorze(slowo)){
                                        znalezione.dodajDoZbioru(slowo);   //dopisuje slowo do zbioru slozw juz znalezionych
                                        listaSciezek.dodajSciezkeDoListy(listaSciezek.stworzSciezkeDoSlowa(slowo, j));
                                        if(slowo==gra.zwrocWyjscie()) {
                                            listaSciezek.wypiszOstatniaSciezke();
                                            return 0;
                                        }
                                    }
                                  }
                            }
                        }
                    }
                }
            }
    cout<<"Nie udalo sie znalezc sciezki < limit krokow"<<endl;
    return 0;
}
