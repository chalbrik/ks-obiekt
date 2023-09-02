#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {

    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;

    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);


public:

    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    void ustawIdZalogowanegoUzytkownika(int przekazaneIdZalogowanegoUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

};

#endif
