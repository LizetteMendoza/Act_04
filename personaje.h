#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<iostream>
using namespace std;

struct personaje
{
    char nombre [20];
    char tipo [20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int con = 0;

void capturar_personajes(){
    if(con<5){
        cout<<"Nombre: ";
        cin.getline(personajes[con].nombre,20,'\n');
        cout<<"Tipo: ";
        cin.getline(personajes[con].tipo,20,'\n');
        cout<<"Fuerza: ";
        cin>>personajes[con].fuerza;
        cout<<"Salud: ";
        cin>>personajes[con].salud;
        cout<<"\n";
        con++;
    }
    else cout<<"El arreglo esta lleno"<<endl;
}

void mostrar_personajes(){
    for (size_t i = 0; i < con; i++)
    {
        cout<<"Nombre: "<<personajes[i].nombre<<endl;
        cout<<"Tipo: "<<personajes[i].tipo<<endl;
        cout<<"Fuerza: "<<personajes[i].fuerza<<endl;
        cout<<"Salud: "<<personajes[i].salud<<endl;
        cout<<"\n";
    }
}

#endif
