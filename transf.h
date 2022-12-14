#ifndef TRANSFORMACIONS_H
#define TRANSFORMACIONS_H

#include <SDL2/SDL.h>
#include <math.h>
#include "graficos.h"

#define RADIANS 0.0174533
//#define ABS(N) ((N<0)?(-N):(N))
//#define MAX(X,Y) ((X>Y)?(X):(Y))
//#define MIN(X,Y) ((X<Y)?(X):(Y))

typedef struct superficie_ext{
    SDL_Surface* superficie;
    T_VECTOR v1;
    T_VECTOR v2;
    T_VECTOR v3; 
    T_VECTOR v4;
    T_VECTOR offset;
} T_SUPERFICIE_EXT;

T_SUPERFICIE_EXT* formatear(SDL_Surface* s);
T_SUPERFICIE_EXT* virar(T_SUPERFICIE_EXT* s, int grados, T_VECTOR offset, T_VECTOR* dir);
#endif
