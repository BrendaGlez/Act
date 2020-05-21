//
// Created by brend on 21/05/2020.
//

#ifndef UNTITLED3_PERSONA_H
#define UNTITLED3_PERSONA_H


class Persona {
private:
    char nombre[100];
    char apellidos[100];
    char nacionalidad[100];
public:
    Persona();
    Persona(char[], char[], char[]);
    void toString();
};


#endif //UNTITLED3_PERSONA_H
