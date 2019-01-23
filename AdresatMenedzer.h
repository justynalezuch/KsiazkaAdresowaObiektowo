#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"

#include <iostream>

using namespace std;

class AdresatMenedzer
{

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoAdresata();


public:
    int idOstatniegoAdresata;

    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);


    void dodajAdresata();
    void wypiszWszystkichAdresatow();

};

#endif
