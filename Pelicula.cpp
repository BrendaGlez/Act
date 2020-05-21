//
// Created by brend on 21/05/2020.
//

#include "Pelicula.h"
#include <cstring>
#include <iostream>


using namespace std;
Persona::Persona() {

}

Persona::Persona(char titulo[100],Persona director,int annio, char genero[100],char productora[100],int min) {
    strcpy(this->titulo,titulo);
    this->autor=autor;
    this->annio=annio;
    strcpy(this->genero,genero);
    strcpy(this->cod,cod);
    strcpy(this->editorial,editorial);
}

void Pelicula::dato(char titulo[100],Persona director,int annio, char genero[100],char productora[100],int min) {
    strcpy(this->titulo,titulo);
    this->director=director;
    this->annio=annio;
    strcpy(this->genero,genero);
    this->min=min;
    strcpy(this->productora,productora);
}

void Pelicula::toString() {
    cout<<"______Informacion de la Pelicula______"<<endl;
    cout<<"TITULO: "<<this->titulo<<endl;
    this->director.toString();
    cout<<"ANNIO: "<<this->annio<<endl;
    cout<<"GENERO: "<<this->genero<<endl;
    cout<<"PRODUCTORA: "<<this->productora<<endl;
    cout<<"MINUTOS: "<<this->min<<endl;
    cout<<"_________________________________"<<endl;
}