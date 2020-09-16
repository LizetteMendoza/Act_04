#include<iostream>

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
        for (size_t i = 0; i < 5; i++)
        {
            cout<<enteros[i]<<" "<<endl;
        }
        for (size_t i = 0; i < 5; i++)
        {
           suma += enteros[i];
        }
        promedio = suma/5.0;
        cout<<"La suma es: "<<suma<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"\n";
    }

int main(){

    char opcion; 
    do{     fflush(stdin);
            cout<<" 1) Capturar enteros"<<endl;
            cout<<" 2) Mostrar cadena n veces"<<endl;
            cout<<" 3) Agregar personajes"<<endl;
            cout<<" 0) Salir"<<endl;
            cin>>opcion;
            fflush(stdin);

            switch (opcion)
            {
            case '1':   capturar_enteros();
                
                break;
            
            case '2':
                break;

            case '3':
                break;    
            
            case '0': cout<<"Saliendo..."<<endl;
                break;

            default: cout<<"Opcion no valida"<<endl;
                break;
            }
    }while(opcion!='0');

}