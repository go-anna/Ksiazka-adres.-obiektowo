#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

class AdresatManager
{
    int idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
       string pobierzLiczbe(string tekst, int pozycjaZnaku);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
     int wczytajLiczbeCalkowita();
      int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
  //  string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
   AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
   void dodajAdresata();
   void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
};

#endif
