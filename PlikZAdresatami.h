

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <cstdlib>


#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami {
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    string pobierzZPlikuOstatniegoAdresataOdzielonegoPionowymiKreskami();
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {};

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);

    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);

};
