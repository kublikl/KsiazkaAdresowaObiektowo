#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{

UzytkownikMenedzer uzytkownikMenedzer;

public:

    KsiazkaAdresowa(string nazwaPlikuZUytkownikami) : uzytkownikMenedzer(nazwaPlikuZUytkownikami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
