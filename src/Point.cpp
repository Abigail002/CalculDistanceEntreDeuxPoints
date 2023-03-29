/**
    Name :main.cpp
    Goal : Calculer la distannce entre deux points A et B dont les coordonnées sont
            saisies par l'utilisateur
    Author : Kossiwavi AMEOGNO
    Date : 18/05/2022
*/

#include <cmath>
#include "Point.h"

Point::Point()
{
    abscisse = 0;
    ordonnee = 0;
}

Point::Point(float tAbs, float tOrd)
{
    abscisse = tAbs;
    ordonnee = tOrd;
}

Point::~Point()
{
    //dtor
}

void Point::setAbscisse(float tAbs)
{
    abscisse = tAbs;
}

float Point::getAbscisse()
{
    return abscisse;
}

void Point::setOrdonnee(float tOrd)
{
    ordonnee = tOrd;
}

float Point::getOrdonnee()
{
    return ordonnee;
}

///Calcul de la distance entre deux points
float Point::calculDistance(Point b)
{
    float dist;

    dist = sqrt(pow(getAbscisse()-b.getAbscisse(),2) + pow(getOrdonnee()-b.getOrdonnee(),2));

    return dist;
}
