#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

    char wyborOpcjiZMenuGlownego;


public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
    adresatMenedzer = NULL;
    wyborOpcjiZMenuGlownego = 0;
    };

    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }

    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();

    void wypiszWszystkichUzytkownikow();

    char pobierzWyborOpcjiZMenuGlownego();
    char pobierzWyborOpcjiZMenuUzytkownika();



};

#endif
