#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenedzer.logowanieUzytkownika();

    adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

