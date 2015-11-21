#ifndef PROYECTILVERDE_H
#define PROYECTILVERDE_H

#include "Proyectil.h"

class Proyectilverde : public Proyectil
{
    public:
        SDL_Renderer* renderer;
        list<Entidad*>* entidades;
        SDL_Texture* texture;
        SDL_Rect rect;
        string state;
        Proyectilverde(list<Entidad*>* entidades,SDL_Renderer* renderer, int x, int y, string state);
        virtual ~Proyectilverde();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // PROYECTILVERDE_H
