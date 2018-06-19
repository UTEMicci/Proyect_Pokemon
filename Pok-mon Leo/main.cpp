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

    // forma de calcular el ataque de un pokémon cout<<Pokedex[1].Atacar(Pokedex[2].getDefensa(),Pokedex[1].getPa1())<<endl;

    int jugadores;
    do{
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
                random(x);
                MochilaRandom(Pokedex,mochila2,x);
                for(int i=1;i<=6;i++){
                    cout<<mochila2[i].getNombre()<<endl;
                }

                cout<<endl<<"\tCOMIENZA LA BATALLA"<<endl<<endl;
                int turnos=1;
                int pokemio,pokerival = 1;
                int pokeataque;
                int valor;
                do{
                    if(turnos%2!=0){

                        if(turnos == 1){
                            cout<<"Es tu turno"<<endl<<endl<<"Debes seleccionar un Pokemon !"<<endl<<endl;
                            cout<<"\t1) "<<mochila[1].getNombre()<<endl<<"\t2) "<<mochila[2].getNombre()<<endl<<"\t3) "<<mochila[3].getNombre()<<endl;
                            cout<<"\t4) "<<mochila[4].getNombre()<<endl<<"\t5) "<<mochila[5].getNombre()<<endl<<"\t6) "<<mochila[6].getNombre()<<endl<<endl;
                            cin>>pokemio;
                            fflush(stdin);
                            cout<<endl<<"Comenzaras con tu "<<mochila[pokemio].getNombre()<<endl<<endl;
                            system("pause>null");
                            system("cls");
                        }

                        if(turnos%2!=0){
                            cout<<"Pokemon "<<nombre<<" : "<<mochila[pokemio].getNombre()<<endl;
                            cout<<"Vida               : "<<mochila[pokemio].getVida()<<endl<<endl;
                            cout<<"Pokemon Rival      : "<<mochila2[pokerival].getNombre()<<endl;
                            cout<<"Vida               : "<<mochila2[pokerival].getVida()<<endl<<endl<<endl;

                            cout<<"Ataques disponibles : "<<endl<<endl;
                            cout<<"\t1) "<<mochila[pokemio].getAt1()<<endl<<"\t2) "<<mochila[pokemio].getAt2()<<endl<<"\t3) "<<mochila[pokemio].getAt3()<<endl;
                            cout<<"\t4) "<<mochila[pokemio].getAt4()<<endl<<"\t5) "<<mochila[pokemio].getAt5()<<endl<<"\t6) "<<mochila[pokemio].getAt6()<<endl<<endl;
                            cout<<"Seleccione un ataque : ";
                            cin>>pokeataque;
                            fflush(stdin);

                            system("cls");

                            switch(pokeataque){
                                case 1 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt1()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa1());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa1())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                                case 2 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt2()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa2());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa2())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                                case 3 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt3()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa3());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa3())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                                case 4 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt4()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa4());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa4())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                                case 5 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt5()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa5());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa5())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                                case 6 : cout<<endl<<mochila[pokemio].getNombre()<<" ataca con "<<mochila[pokemio].getAt6()<<" !! "<<endl;
                                         valor=mochila2[pokerival].getVida() - mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa6());
                                         mochila2[pokerival].setVida(valor);
                                         cout<<endl<<"\tAtaque de "<<mochila[pokemio].Atacar(mochila2[pokerival].getDefensa(),mochila[pokemio].getPa6())<<endl;
                                         Sleep(1500);system("cls");
                                         break;
                            }

                            if(mochila2[pokerival].getVida()<=0){
                                cout<<endl<<"El Pokemon de tu rival "<<mochila2[pokerival].getNombre()<<" a sido DERROTADO !! "<<endl;
                                // AQUI EVALUAR CUANDO UN POKEMON ESTE MUERTO CAMBIARLO A OTRO QUE ESTE VIVO PARA QUE LA BATALLA SIGA, ESTE ES EL CASO DE
                                // LOS POKEMON MUERTOS DEL RIVAL


                                Sleep(1500); system("cls");
                            }
                        }
                    }

                turnos++;
                }while( EstanVivos(mochila) == true && EstanVivos(mochila2) == true );
                cout<<"oh tus pokemon estan muertos .. "<<endl;
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
