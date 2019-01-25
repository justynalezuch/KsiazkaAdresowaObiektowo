#include "AdresatMenedzer.h"

 void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
 {
     adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
 }

void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);

    //todo: Dynamicznie pobierac ID zalogowanego uzytkownika
    adresat.ustawIdUzytkownika(1);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatMenedzer::wypiszWszystkichAdresatow()
{
    for(int i = 0; i <adresaci.size(); i++)
    {
        cout<<adresaci[i].pobierzId() << endl;
        cout<<adresaci[i].pobierzIdUzytkownika() << endl;
        cout<<adresaci[i].pobierzImie() << endl;
        cout<<adresaci[i].pobierzNazwisko() << endl;
        cout<<adresaci[i].pobierzNumerTelefonu() << endl;
        cout<<adresaci[i].pobierzEmail() << endl;
        cout<<adresaci[i].pobierzAdres() << endl;
        cout<<endl;
    }

    system("pause");
}
