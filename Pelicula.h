//
// Created by brend on 21/05/2020.
//

#ifndef UNTITLED3_PELICULA_H
#define UNTITLED3_PELICULA_H


#include "Persona.h"

class Pelicula {
private:
    char titulo[100];
    Persona director;
    int annio;
    char genero[100];
    char productora[100];
    int min;
public:
    Pelicula();
    Pelicula(char[],Persona,int, char[], char[], int);
    void dato(char[],Persona,int, char[], char[], int);
    void toString();

};


#endif //UNTITLED3_PELICULA_H
