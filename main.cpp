#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");


    while (true) {

        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == 0) {

            ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (ksiazkaAdresowa.pobierzWyborOpcjiZMenuGlownego()) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }

        } else {

            ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (ksiazkaAdresowa.pobierzWyborOpcjiZMenuUzytkownika()) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
