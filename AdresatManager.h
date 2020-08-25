#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include <vector>

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatManager(string nazwaPlikuZAdresatami,int idZalogowanegoUzytkownika)
        :plikZAdresatami(nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    int podajIdWybranegoAdresata();
    void edytujAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneEdytowanegoAdresata(Adresat adresat);



};

#endif
