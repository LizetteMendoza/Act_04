#include<iostream>
#include"personaje.h"

using namespace std;

void capturar_enteros(){
        int enteros[5];
        float promedio;
        int suma=0;
        for (size_t i = 0; i < 5; i++)
        {
            cout<<"\nIngrese un numero: ";
            cin>>enteros[i];
        }
        cout<<"\n";
        for (size_t i = 0; i < 5; i++)
        {
            cout<<enteros[i]<<" ";
        }
        cout<<"\n";
        for (size_t i = 0; i < 5; i++)
        {
           suma += enteros[i];
        }
        promedio = suma/5.0;
        cout<<"La suma es: "<<suma<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"\n";
    }

void mostrar_cadena(int n, char cadena[]){

    for (size_t i = 0; i < n; i++)
    {
        cout<<cadena<<endl;
    }
    cout<<"\n";

}

int main(){

    char opcion; 
    int n;
    char cadena[20];
    

    do{     fflush(stdin);
            cout<<" 1) Capturar enteros"<<endl;
            cout<<" 2) Mostrar cadena n veces"<<endl;
            cout<<" 3) Agregar personajes"<<endl;
            cout<<" 4) Mostrar personajes"<<endl;
            cout<<" 0) Salir"<<endl;
            cin>>opcion;
            fflush(stdin);

            switch (opcion)
            {
            case '1':   capturar_enteros();
                
                break;
            
            case '2':   cout<<"Escribe una cadena de hasta 20 caracteres: ";
                        cin.getline(cadena,20,'\n');
                        cout<<"Veces que quieres que se imprima la cadena: ";
                        cin>>n;
                        mostrar_cadena(n, cadena);
                break;

            case '3':   capturar_personajes();
                break;    

            case '4':    mostrar_personajes();
                break;
            
            case '0': cout<<"Saliendo..."<<endl;
                break;

            default: cout<<"Opcion no valida"<<endl;
                break;
            }
    }while(opcion!='0');

}