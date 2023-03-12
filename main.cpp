#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");


   // ksiazkaAdresowa.rejestracjaUzytkownika();
  //  ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.logowanieUzytkownika();
 //   ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   ksiazkaAdresowa.dodajAdresata();
   ksiazkaAdresowa.dodajAdresata();
 //   ksiazkaAdresowa.wylogujUzytkownika();

    return 0;
}
