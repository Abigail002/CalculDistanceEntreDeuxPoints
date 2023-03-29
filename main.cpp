/**
    Name :main.cpp
    Goal : Calculer la distannce entre deux points A et B dont les coordonnées sont
            saisies par l'utilisateur
    Author : Kossiwavi AMEOGNO
    Date : 18/05/2022
*/

#include <iostream>
#include <locale.h>
#include <iomanip>
#include "Point.h"

using namespace std;

int main()
{
    ///Prototype
    void saisieCoordonnees(Point &p, char nomPoint);

    ///Variables
    Point p1, p2;
    char reponse;
    float distance;

    do
    {
        system("cls");
        setlocale(LC_CTYPE,"");
        cout << setiosflags(ios::showpoint|ios::fixed);
        cout << setprecision(2);

        cout << "\t\tPROGRAMME CALCUL DE DISTANCE ENTRE DEUX POINTS (A et B)" << endl;

        saisieCoordonnees(p1, 'A');
        saisieCoordonnees(p2, 'B');

        ///Calcul de la distance entre les points A et B saisis
        distance = p1.calculDistance(p2);

        cout << "\nLa distance entre A et B est égale à " << distance << endl;

        do
        {
            cout << "\nVoulez-vous recommencer (O/N) ? ";
            cin >> reponse;
            reponse = toupper(reponse);
        }
        while(reponse!='O' && reponse!='N');

    }
    while(reponse=='O');

    return 0;
}

///Saisie des coordonnées d'un point
void saisieCoordonnees(Point &p, char nomPoint)
{
    float tabs, tord;

    cout << "\nSaisissez les coordonnées du point " << nomPoint << " : " << endl;
    cout << "Abcisse : ";
    cin >> tabs;
    cout << "Ordonnée : ";
    cin >> tord;

    p.setAbscisse(tabs);
    p.setOrdonnee(tord);
}
