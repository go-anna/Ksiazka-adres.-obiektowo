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
    const int idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlDaneAdresata(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int wczytajLiczbeCalkowita();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
       AdresatManager (string nazwaPlikuZAdresatami, int IDZALOGOWANEGOUZYTKOWNIKA) :
        plikZAdresatami(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };
    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
};

#endif
