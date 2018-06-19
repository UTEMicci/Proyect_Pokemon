#include <iostream>
#include <string.h>
#include <windows.h> // LIBRERIA PARA EL USO DE SLEEP()
#include <fstream> // LIBRERIA PARA LA LECTURA Y ESCRITURA EN ARCHIVOS
#include <sstream> // LIBRERIA QUE FACILITA LA LECTURA Y ASIGNACION A VARIABLES DE LOS DATOS DE UN ARCHIVO
#include <cstring>
#include <time.h>
#include <stdlib.h> // LIBRERIA ESTANDAR DE C
#include "Pokemon.h"
using namespace std;

void LecturaPokedex(Pokemon Pokedex[]){

    ifstream archivo;
    string nombre ,at1 ,at2 ,at3 ,at4 ,at5 ,at6;
    string pa1, pa2, pa3, pa4, pa5, pa6;
    string linea;
    string vida ,nivel ,ataque ,defensa ,resistencia;

    archivo.open("PokeDex2.txt", ios::in);
    if(archivo.fail()){
        cout<<"Error al abrir el archivo";
        exit(1);
    }
    while(!archivo.eof()){ //mientras no sea el final del archivo, que siga leyendo
        //getline(archivo,texto); // copiando todo lo de archivo en texto
    int i=1;
        while(getline(archivo,linea)){
            stringstream stream(linea);
            getline(stream,nombre,';');
            getline(stream,nivel,';');
            getline(stream,vida,';');
            getline(stream,at1,';');
            getline(stream,pa1,';');
            getline(stream,at2,';');
            getline(stream,pa2,';');
            getline(stream,at3,';');
            getline(stream,pa3,';');
            getline(stream,at4,';');
            getline(stream,pa4,';');
            getline(stream,at5,';');
            getline(stream,pa5,';');
            getline(stream,at6,';');
            getline(stream,pa6,';');
            getline(stream,ataque,';');
            getline(stream,defensa,';');
            getline(stream,resistencia,';');

            int vidas,nivels,ataques,defensas,resistencias;
            int _pa1,_pa2,_pa3,_pa4,_pa5,_pa6;
            _pa1 = atoi(pa1.c_str());
            _pa2 = atoi(pa2.c_str());
            _pa3 = atoi(pa3.c_str());
            _pa4 = atoi(pa4.c_str());
            _pa5 = atoi(pa5.c_str());
            _pa6 = atoi(pa6.c_str());
            vidas  = atoi(vida.c_str());
            nivels = atoi(nivel.c_str());
            ataques = atoi(ataque.c_str());
            defensas = atoi(defensa.c_str());
            resistencias = atoi(resistencia.c_str());

            Pokedex[i].setAtributos(nombre,vidas,nivels,_pa1,_pa2,_pa3,_pa4,_pa5,_pa6,at1,at2,at3,at4,at5,at6,ataques,defensas,resistencias);
            i++;
             }
        }
        archivo.close();
}

int Pokemon::Atacar(int d, int poder ){
    float num, num1, den, den1, total;

    num = (0.2 * nivel) + 1;
    num1 = num * ataque * poder;
    den = 25 * d;
    den1 = num1 / den ;
    total = den1 + 2;

    return total;
}

void Pokemon::Mostrar()
{
    cout<<"Nombre         : "<<nombre<<endl;
    cout<<"Vida           : "<<vida<<endl;
    cout<<"Nivel          : "<<nivel<<endl;
    cout<<"Ataque         : "<<ataque<<endl;
    cout<<"Defensa        : "<<defensa<<endl;
    cout<<"Resistencia    : "<<resistencia<<endl;
    cout<<"Ataque y valor : "<<at1<<" - "<<pa1<<endl;
    cout<<"Ataque y valor : "<<at2<<" - "<<pa2<<endl;
    cout<<"Ataque y valor : "<<at3<<" - "<<pa3<<endl;
    cout<<"Ataque y valor : "<<at4<<" - "<<pa4<<endl;
    cout<<"Ataque y valor : "<<at5<<" - "<<pa5<<endl;
    cout<<"Ataque y valor : "<<at6<<" - "<<pa6<<endl;

}


void ListaPokemon(Pokemon Pokedex[]){
    cout<<endl<<"\tLista de Pokemon's"<<endl<<endl;
    for(int i=1; i<=151 ; i++){
        cout<<i<<") "<<Pokedex[i].getNombre()<<endl;
    }
}

bool EstanVivos (Pokemon all[]){

    if(all[1].getVida()<=0 && all[2].getVida()<=0 && all[3].getVida()<=0 && all[4].getVida()<=0 && all[5].getVida()<=0 && all[6].getVida()<=0)
        return false;
    else
        return true;

}

void Mochila(Pokemon Pokedex[],Pokemon mochila[], int p1,int p2,int p3,int p4,int p5,int p6){
    mochila[1]=Pokedex[p1];
    mochila[2]=Pokedex[p2];
    mochila[3]=Pokedex[p3];
    mochila[4]=Pokedex[p4];
    mochila[5]=Pokedex[p5];
    mochila[6]=Pokedex[p6];
}

void random(int x[]){
    long int n_aleatorio;

    srand(time(NULL));
    for(int j=1;j<=6;j++){
        for(int i=1;i<=6;i++){
            n_aleatorio=rand()%11;

        }
        switch(j){
            case 1 :    x[1]=n_aleatorio+21;
                        break;
            case 2 :    x[2]=(n_aleatorio+1)*7;
                        break;
            case 3 :    x[3]=n_aleatorio+99;
                        break;
            case 4 :    x[4]=((n_aleatorio+1)*12)-5;
                        break;
            case 5 :    x[5]=(n_aleatorio+1)*2;
                        break;
            case 6 :    x[6]=n_aleatorio+1;
                        break;
        }
    }
}

void MochilaRandom(Pokemon Pokedex[],Pokemon mochila2[],int x[]){
    mochila2[1]=Pokedex[x[1]];
    mochila2[2]=Pokedex[x[2]];
    mochila2[3]=Pokedex[x[3]];
    mochila2[4]=Pokedex[x[4]];
    mochila2[5]=Pokedex[x[5]];
    mochila2[6]=Pokedex[x[6]];
}



void MostrarMochila(Pokemon mochila[]){
    cout<<endl<<"Tus Pokemon son :"<<endl<<endl;
    for(int z=1;z<=6;z++){
        cout<<z<<") "<<mochila[z].getNombre()<<endl;
    }
}
