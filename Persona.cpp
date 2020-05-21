//
// Created by brend on 21/05/2020.
//

#include "Persona.h"
#include <cstring>
#include <iostream>
using namespace std;

Persona::Persona() {

}

Persona::Persona(char nombre[100], char apellidos[100], char nacionalidad[100]) {
    strcpy(this->nombre,nombre);
    strcpy(this->apellidos,apellidos);
    strcpy(this->nacionalidad,nacionalidad);

}

void Persona::toString() {
    cout<<"______Informacion del Director______"<<endl;
    cout<<"NOMBRE: "<<this->nombre<<endl;
    cout<<"APELLIDO(S): "<<this->apellidos<<endl;
    cout<<"NACIONALIDAD: "<<this->nacionalidad<<endl;
    cout<<"_________________________________"<<endl;
}