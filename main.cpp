#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   ksiazkaAdresowa.logowanieUzytkownika();

   ksiazkaAdresowa.dodajAdresata();


//   ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();


    return 0;
}
