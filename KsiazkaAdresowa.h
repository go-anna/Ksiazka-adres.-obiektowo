#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"


using namespace std;

class KsiazkaAdresowa
{
UzytkownikManager uzytkownikManager;
AdresatManager adresatManager;
int idZalogowanegoUzytkownika;
 public:
     KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami): uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami) {
     uzytkownikManager.wczytajUzytkownikowZPliku();
     adresatManager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
     };

     void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
     void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZPliku();
};
#endif
