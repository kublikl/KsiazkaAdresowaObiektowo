#include "UzytkownikMenedzer.h"

int UzytkownikMenedzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    //uzytkownik.id = pobierzIdNowegoUzytkownika();
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do
    {
        cout << "Podaj login: ";
       // uzytkownik.login = wczytajLinie();
       cin >> login;
       uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo; // nowo dodane
    cout << "Podaj haslo: ";
   // uzytkownik.haslo = wczytajLinie();
   cin >> haslo;
   uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

void UzytkownikMenedzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

bool UzytkownikMenedzer::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
             cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
             return true;
        }

    }
    return false;
    /*

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
        else
            itr++;
    }
    return false;
    */
}

void UzytkownikMenedzer::wypiszWszystkichUzytkownikow()
{
     for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;

    }
}


