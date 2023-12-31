#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze {

public:

    static string wczytajLinie();

    static string konwerjsaIntNaString(int liczba);

    static int konwersjaStringNaInt(string liczba);

    static char wczytajZnak();

    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

    static int wczytajLiczbeCalkowita();

    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif
