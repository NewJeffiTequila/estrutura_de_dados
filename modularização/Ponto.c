#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Ponto.h"

struct ponto
{
    float x , y;
};

Ponto* ponto_criar(float x ,float y ){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p!=NULL)
    {
        p->x = x;
        p->y = y;
    }
    return p;  
}
void ponto_liberar(Ponto* p){
    free(p);
}
void ponto_acessar(Ponto* p , float* x, float* y){
    *x = p->x;
    *y = p->y;
}
void ponto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}
float ponto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

int main(int argc, char const *argv[])
{
    float d;
    Ponto *p, *q;
    p = ponto_criar(10,20);
    q = ponto_criar(15,21);
    d =ponto_distancia(p,q);
    printf("Distancia:%f\n\n", d);
    ponto_liberar(q);
    ponto_liberar(p);
    system("pause");
    return 0;
}

