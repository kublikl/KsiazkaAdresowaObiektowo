#include "KsiazkaAdresowa.h"

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }

}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else {
        cout << "Aby wyswietlic adresatow, nalezy najpierw sie zalogowac." << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
     if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
     {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
     }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
     if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
     {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
     }
}

void KsiazkaAdresowa::usunAdresata()
{
     if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
     {
        adresatMenedzer->usunAdresata();
     }
}

void KsiazkaAdresowa::edytujAdresata()
{
     if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
     {
        adresatMenedzer->edytujAdresata();
     }
}
