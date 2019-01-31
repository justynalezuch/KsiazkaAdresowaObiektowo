#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
   // ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();

    ksiazkaAdresowa.dodajAdresata();

        ksiazkaAdresowa.wypiszWszystkichAdresatow();





    return 0;
}
