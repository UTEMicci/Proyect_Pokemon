#include <iostream>
#include <string>
#include <windows.h> // LIBRERIA PARA EL USO DE SLEEP()
#include <fstream> // LIBRERIA PARA LA LECTURA Y ESCRITURA EN ARCHIVOS
#include <sstream> // LIBRERIA QUE FACILITA LA LECTURA Y ASIGNACION A VARIABLES DE LOS DATOS DE UN ARCHIVO
#include <cstring>
#include <stdlib.h> // LIBRERIA ESTANDAR DE C
#include "Pokemon.h"
#include <time.h>
using namespace std;

int main()
{
    Pokemon Pokedex[152];
    Pokemon mochila[7];
    Pokemon mochila2[7];
    int x[7];
    LecturaPokedex(Pokedex);
//    ListaPokemon(Pokedex);
     for (int i=1;i<=151;i++){
        Pokedex[i].Mostrar();
        cout<<endl;
     }
     system("pause");
    int jugadores;
    do{
       // random(x);
        //MochilaRandom(Pokedex,mochila2,x);
        cout<<endl<<"HOLA BIENVENIDO A POKEMON "<<endl<<endl;
        cout<<"Cuantos entrenadores jugaran : "<<endl<<endl<<"\t1) Un entrenador .\n\t2) Dos entrenadores ."<<endl<<endl;
        cout<<"Seleccione una opcion : ";
        cin>>jugadores;
        fflush(stdin);
        system("cls");
        if(jugadores == 1){
            string nombre ;
            int opc, p1, p2, p3, p4, p5, p6;

            cout<<endl<<"\tUN ENTRENADOR"<<endl<<endl;
            cout<<"Ingresa tu nombre : ";
            getline(cin,nombre);
            fflush(stdin);
            cout<<"Seleccionar tus Pokemon's (1 = si / 0 = no) : ";
            cin>>opc;
            system("cls");
            if(opc==1){
                ListaPokemon(Pokedex);
                cout<<endl<<"\t Seleccione 6 Pokemon's"<<endl<<endl;
                cout<<"1er Pokemon : ";
                cin>>p1;
                cout<<"2do Pokemon : ";
                cin>>p2;
                cout<<"3er Pokemon : ";
                cin>>p3;
                cout<<"4to Pokemon : ";
                cin>>p4;
                cout<<"5to Pokemon : ";
                cin>>p5;
                cout<<"6to Pokemon : ";
                cin>>p6;
                Mochila(Pokedex,mochila,p1,p2,p3,p4,p5,p6);
                cout<<endl<<endl<<"Tu MOCHILA esta lista ! \t\t";
                system("pause>null");
                system("cls");

                cout<<endl<<"\tCOMIENZA LA BATALLA"<<endl<<endl;
            }
            if(opc==0){
                cout<<endl<<"\tTus Pokemon seran elegidos al azar "<<endl<<endl;
                system("pause>null");
                random(x);
                MochilaRandom(Pokedex,mochila2,x);
                MostrarMochila(mochila2);
                cout<<endl<<endl<<"Tu MOCHILA esta lista ! \t\t";
                system("pause>null");
                system("cls");

            }

            system("pause>null");
        }

    }while(jugadores==1 && jugadores==2);
    cout<<"Salida del programa";


    return 0;
}
