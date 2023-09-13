#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"


void KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wyborOpcjiZMenuGlownego = MetodyPomocnicze::wczytajZnak();
}

void KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    uzytkownikMenedzer.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::dodajAdresata() {
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer->dodajAdresata();
    } else {
        cout << "Aby dodac adresata, nalezy sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::usunAdresata() {
    adresatMenedzer->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata() {
    adresatMenedzer->edytujAdresata();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

char KsiazkaAdresowa::pobierzWyborOpcjiZMenuGlownego() {
    return wyborOpcjiZMenuGlownego;
}

char KsiazkaAdresowa::pobierzWyborOpcjiZMenuUzytkownika() {
    return uzytkownikMenedzer.pobierzWyborOpcjiZMenuUzytkownika();
}

