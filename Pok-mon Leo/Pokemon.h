#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

using namespace std ;

class Pokemon{
private:
    string nombre;
    int vida,nivel;
    string at1,at2,at3,at4,at5,at6;
    int ataque,defensa,resistencia;

public:
    void setAtributos(string _nombre,int _vida,int _nivel,string _at1,string _at2,string _at3,string _at4,string _at5,string _at6,int _ataque,int _defensa,int _resistencia){
        nombre = _nombre;
        vida = _vida;
        nivel = _nivel;
        at1 = _at1;
        at2 = _at2;
        at3 = _at3;
        at4 = _at4;
        at5 = _at5;
        at6 = _at6;
        ataque = _ataque;
        defensa = _defensa;
        resistencia = _resistencia;
    }
    string getNombre(){return nombre;}
    int getVida(){return vida;}
    int getNivel(){return nivel;}
    string getAt1(){return at1;}
    string getAt2(){return at2;}
    string getAt3(){return at3;}
    string getAt4(){return at4;}
    string getAt5(){return at5;}
    string getAt6(){return at6;}
    int getAtaque(){return ataque;}
    int getDefensa(){return defensa;}
    int getResistencia(){return resistencia;}
    int atacar();
};
typedef Pokemon Pokedex[151];


void LecturaPokedex(Pokemon Pokedex[]);
void MostrarPokemones(Pokemon Pokedex[]);
void ListaPokemon(Pokemon Pokedex[]);
void Mochila(Pokemon Pokedex[],Pokemon mochila[], int p1,int p2,int p3,int p4,int p5,int p6);
void ver(Pokemon Pokedex[]);
void random(int x[]);
void MochilaRandom(Pokemon Pokedex[],Pokemon mochila2[],int x[]);
void MostrarMochila(Pokemon mochila[]);

#endif // POKEMON_H_INCLUDED
