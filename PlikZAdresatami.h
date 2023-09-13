#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <cstdlib>

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"



using namespace std;

class PlikZAdresatami :public PlikTekstowy{

    string NazwaTymczasowegoPlikuZAdresatami;
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    string pobierzZPlikuOstatniegoAdresataOdzielonegoPionowymiKreskami();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {
    idOstatniegoAdresata = 0;
    };

    int pobierzIdOstatniegoAdresata();

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    void usunWybranegoAdresataZpliku(int idUsuwanegoAdresata);
    void edytujDaneAdresataWPliku(Adresat adresat);

};

#endif
