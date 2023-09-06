#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");


    //Dostepne funkcje:
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wyswietlWszystkichAdresatow();



    while (true) {

        ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

        switch (ksiazkaAdresowa.pobierzWyborOpcjiZMenuGlownego()) {
        case '1':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '2':
            ksiazkaAdresowa.logowanieUzytkownika();

            if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == 0) {

                ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

                switch (ksiazkaAdresowa.pobierzWyborOpcjiZMenuUzytkownika()) {
                case '1':
                    ksiazkaAdresowa.dodajAdresata();
                    break;
                case '2':
                    //wyszukajAdresatowPoImieniu(adresaci);
                    break;
                case '3':
                    //wyszukajAdresatowPoNazwisku(adresaci);
                    break;
                case '4':
                    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                    break;
                case '5':
                    //idUsunietegoAdresata = usunAdresata(adresaci);
                    //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                    break;
                case '6':
                    //edytujAdresata(adresaci);
                    break;
                case '7':
                    //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                    break;
                case '8':
                    ksiazkaAdresowa.wylogowanieUzytkownika();
                    break;
                }

            }
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
    }

    return 0;
}
