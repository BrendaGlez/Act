# Act
#include <iostream>
#include "Persona.h"
#include "Persona.h"
#include "Pelicula.h"
#include <iostream>

using namespace std;

Pelicula info(){
    char titulo[100];
    char nombre[100];
    char apellidos[100];
    char nacionalidad[100];
    char genero[100];
    char productora[100];
    int min;
    int annio;

    cout<<"__________Informacion de la pelicula___________"<<endl;
    cout<<"Ingrese el tirulo de la pelicula; "<<endl;
    cin>>titulo;
    cout<<"Ingrese el genero de la pelicula ; "<<endl;
    cin>>genero;
    cout<<"Ingrese la editorial de la pelicula; "<<endl;
    cin>>productora;
    cout<<"Ingrese el la duracion de la pelicula (min); "<<endl;
    cin>>min;
    cout<<"Ingrese el annio de la pelicula; "<<endl;
    cin>>annio;
    cout<<"__________________________________________"<<endl;
    cout<<endl;

    cout<<"__________Informacion del Director___________"<<endl;
    cout<<"Ingrese el nombre del autor; "<<endl;
    cin>>nombre;
    cout<<"Ingrese el apellido(s) del autor; "<<endl;
    cin>>apellidos;
    cout<<"Ingrese la nacionalidad del autor; "<<endl;
    cin>>nacionalidad;
    cout<<"__________________________________________"<<endl;
    cout<<endl;

    return Pelicula(titulo,genero,productora,min,annio,Persona(nombre,apellidos,nacionalidad));
}
void  menu1(){
    cout<<"____________MENU PRINCIPAL_______________"<<endl;
    cout<<"1.-REGISTRAR UNA PELICULA "<<endl;
    cout<<"2.-EDICTAR UNA PELICULA"<<endl;
    cout<<"3.-ELIMINAR UNA PELICULA"<<endl;
    cout<<"4.-CONSULTAR DIRECTOR"<<endl;
    cout<<"5.-DETALLES DE UNA PELICULA "<<endl;
    cout<<"__________________________________________"<<endl;
    cout<<endl;
}
void  menu2(){
    cout<<"___________QUE DESEA MODIFICAR____________"<<endl;
    cout<<"1.-TITULO "<<endl;
    cout<<"2.-ANNIO"<<endl;
    cout<<"3.-GENERO "<<endl;
    cout<<"4.-PRODUCTORA"<<endl;
    cout<<"5.-MINUTOS "<<endl;
    cout<<"__________________________________________"<<endl;
    cout<<endl;
}

int main() {
    Pelicula peliculas[10];
    bool power= true;
    int res=0;
    int peli=0;
    int n=0;

    while (power){
        menu1();
        cin>>res;
        switch (res){
            case 1:
                peliculas[peli]=info();
                peli++;
                break;
            case 2:
                int r=0;
                cout<<"Numero de pelicula: "<<endl;
                cin>>n;
                peliculas[n].toString();
                peliculas[n]=info();
                menu2();
                cin>>r;
                if(r==1){
                    char titulo[100];
                    cout<<"TITULO; "<<endl;
                    cin>>titulo;
                    titulo==titulo;
                }if(r==2){
                    int  annio;
                    cout<<"ANNIO; "<<endl;
                    cin>>annio;
                    annio==annio;
                }if(r==3){
                    char genero[100];
                    cout<<"GENERO; "<<endl;
                    cin>>genero;
                    genero==genero;
                }if(r==5){
                    int  min;
                    cout<<"MINUTOS; "<<endl;
                    cin>>min;
                    min=min;
                }if(r==4){
                   char productora[100];
                   cout<<"PRODUCTORA; "<<endl;
                   cin>>productora;
                   productora==productora;
                   }
                cout<<endl;
                cout<<"______Dato modificado______"<<endl;
                break;
            case 3:
                cout<<"Numero de Pelicula: "<<endl;
                cin>>n;
                peliculas[n].toString();
                peliculas[n]=Pelicula();
                cout<<"______ELIMINADO______"<<endl;
                break;
            case 4:
                cout<<"Numero de pelicula: "<<endl;
                cin>>n;
                peliculas[n].dato();
                break;
            case 5:
                cout<<"Numero de pelicula: "<<endl;
                cin>>n;
                peliculas[n].toString();
                break;
            default:
        }
    }
    return 0;
}
