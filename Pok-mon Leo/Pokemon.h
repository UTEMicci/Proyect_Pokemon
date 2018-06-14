#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

using namespace std ;

class Pokemon{
private:
    string nombre;
    int vida,nivel;
    string at1,at2,at3,at4,at5,at6;
    int pa1,pa2,pa3,pa4,pa5,pa6;
    int ataque,defensa,resistencia;

public:
    void setAtributos(string _nombre,int _vida,int _nivel,int _pa1, int _pa2, int _pa3,int _pa4, int _pa5,int _pa6,string _at1,string _at2,string _at3,string _at4,string _at5,string _at6,int _ataque,int _defensa,int _resistencia){
        nombre = _nombre;
        vida = _vida;
        nivel = _nivel;
        pa1 = _pa1;
        pa2 = _pa2;
        pa3 = _pa3;
        pa4 = _pa4;
        pa5 = _pa5;
        pa6 = _pa6;
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
    int getPa1(){return pa1;}
    int getPa2(){return pa2;}
    int getPa3(){return pa3;}
    int getPa4(){return pa4;}
    int getPa5(){return pa5;}
    int getPa6(){return pa6;}
    int getAtaque(){return ataque;}
    int getDefensa(){return defensa;}
    int getResistencia(){return resistencia;}
    int Atacar();
    void Mostrar();
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
