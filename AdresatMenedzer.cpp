#include "AdresatMenedzer.h"

void AdresatMenedzer::ustawIdZalogowanegoUzytkownika(int przekazaneIdZalogowanegoUzytkownika) {
    if(przekazaneIdZalogowanegoUzytkownika > 0) {
        idZalogowanegoUzytkownika = przekazaneIdZalogowanegoUzytkownika;
    }
}

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku() {
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

void AdresatMenedzer::dodajAdresata() {
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, plikZAdresatami.pobierzIdOstatniegoAdresata());

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    plikZAdresatami.ustawIdOstatniegoAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1);
}



Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata) {
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    //adresat.pobierzImie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie);

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    //adresat.pobierzNazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}


