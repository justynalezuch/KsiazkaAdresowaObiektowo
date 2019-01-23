#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
//#include "PlikZAdresatami.h"

#include <iostream>

using namespace std;

class AdresatMenedzer
{

    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    UzytkownikMenedzer uzytkownikMenedzer(string nazwaPlikuZUzytkownikami);
    //PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoAdresata();

   // Uzytkownik podajDaneNowegoUzytkownika();
    //int pobierzIdNowegoUzytkownika();
    //bool czyIstniejeLogin(string login);




public:

   void dodajAdresata();
   void wypiszWszystkichAdresatow();

};

#endif
