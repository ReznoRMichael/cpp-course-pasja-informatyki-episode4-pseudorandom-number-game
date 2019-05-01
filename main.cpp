#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu 1...100" << endl;
    srand(time(NULL)); // inicjowanie randomizera
    liczba = rand()%100+1; // losowanie liczby pseudolosowej
    cout << liczba << endl;

    while(strzal!=liczba) // petla do czasu az prawidlowa liczba zostanie podana
    {
        ile_prob++; // licznik prob +1
        cout << "Zgadnij jaka (to Twoja " << ile_prob << " proba): ";
        cin >> strzal;

        if(strzal==liczba) // jesli zgadles prawidlowo
            cout << "Udalo sie! Wygrywasz w " << ile_prob << " probie." << endl;

        if(strzal<liczba) // jesli liczba jest za mala
            cout << "To za malo." << endl;

        else if(strzal>liczba) // jesli liczba jest za duza
            cout << "To za duzo." << endl;
    }

    getchar(); // czekaj na potwierdzenie klawiszem
    //system("pause");

    return 0;
}
