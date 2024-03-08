#include <iostream>
using namespace std;

class personaje 
{
private: 
    
public:
    
}


class Enano 
{
private:
int vida;
float altura;
int edad;
   
public:
    Enano(){}
void inicializar(){
    this->altura =2;
    this->edad = 150;
    this-> vida = 10;
}
    void comer(){

    }
};




int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f= 0.1;
    double d= 0.1;
    char c = 'a';
    Enano e;


    cout<<"Tamaño de datos nativos"<<endl;
    cout<<"Tamaño de int:"<<sizeof(int)<<"bytes."<<endl;
    cout<<"Tamaño de bool:"<<sizeof(bool)<<"bytes."<<endl;
    cout<<"Tamaño de float:"<<sizeof(float)<<"bytes."<<endl;
    cout<<"Tamaño de double:"<<sizeof(double)<<"bytes."<<endl;
    cout<<"Tamaño de char:"<<sizeof(char)<<"bytes."<<endl;
    cout<<"Tamaño de Enano:"<<sizeof(Enano)<<"bytes."<<endl;


    cout<<"memoria estatica en c "<<endl;
    cout<<"Direccion de : int "<< &i <<endl;
    cout<<"Direccion de : bool"<< &b <<endl;
    cout<<"Direccion de : float"<< &f <<endl;
    cout<<"Direccion de : double"<< &d <<endl;
    cout<<"Direccion de : char"<<static_cast<void*>(&c) <<endl;
    cout<<"Direccion de : Enano"<<&e<<endl;
    

    cout<<endl;
    cout<<"Memoria dinamica en c : "<<endl; 
    cout<<"Direccion de : "<<malloc(2)<<endl;

    cout<<"Direccion dinamica int: "<<malloc(sizeof(int))<<endl;
    //void* direccion = malloc(sizeof(int));

    //Casteo de punteros en c 
    Enano* direccion=(Enano*)malloc(sizeof(Enano));
    direccion->inicializar();

    //punteros en c 
    Enano* instancia = new Enano;
 //operador 
 instancia ->comer();

    return 0;
};

