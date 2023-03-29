/**
    Name :main.cpp
    Goal : Calculer la distannce entre deux points A et B dont les coordonnées sont
            saisies par l'utilisateur
    Author : Kossiwavi AMEOGNO
    Date : 18/05/2022
*/

#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float, float);
        virtual ~Point();

        void setAbscisse(float);
        float getAbscisse();
        void setOrdonnee(float);
        float getOrdonnee();
        float calculDistance(Point);


    protected:

    private:
        float abscisse;
        float ordonnee;
};

#endif // POINT_H
