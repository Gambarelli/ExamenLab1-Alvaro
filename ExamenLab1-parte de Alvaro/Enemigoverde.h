#ifndef ENEMIGOVERDE_H
#define ENEMIGOVERDE_H

#include "Personaje.h"
#include "Jugador.h"
#include <stdlib.h>
#include <list>
#include "Proyectilverde.h"

class Jugador;

class Enemigoverde : public Enemigo
{
    public:
        Jugador* jugador;
        Enemigoverde(list<Entidad*>* entidades,SDL_Renderer* renderer);
        virtual ~Enemigoverde();
        void logica();
    protected:
    private:
};

#endif // ENEMIGOverde_H
