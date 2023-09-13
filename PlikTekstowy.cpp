#include "PlikTekstowy.h"


bool PlikTekstowy::czyPlikJestPusty() {
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU.c_str(), ios::in);
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0) {
        plikTekstowy.close();
        return true;
    } else {
        plikTekstowy.close();
        return false;
    }
}
