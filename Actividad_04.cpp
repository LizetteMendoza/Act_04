#include<iostream>

using namespace std;

int main(){

    char opcion; 
    do{
            cout<<" 1) Capturar enteros"<<endl;
            cout<<" 2) Mostrar cadena n veces"<<endl;
            cout<<" 3) Agregar personajes"<<endl;
            cout<<" 0) Salir"<<endl;
            cin>>opcion;
            fflush(stdin);
    }while(opcion!='0');

}