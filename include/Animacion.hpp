#pragma once 
#include <list>
#include <Dibujo.hpp>
using namespace std;


class Animacion
{
private:
list<Dibujo> fotogramas;

    
public:

    Animacion(list<Dibujo> fotogramas){
        this->fotogramas=fotogramas;
    }
    ~Animacion() {}
    void Reproducir(){
        for (auto &&Dibujo : this->fotogramas)
        {
            Dibujo.Dibujar();
        }
        
    }
};


