typedef struct ponto Ponto;

Ponto *ponto_criar(float x , float y);
void ponto_liberar(Ponto* p);
void ponto_acessar(Ponto* p, float x , float y);
void ponto_atribui(Ponto* p, float x , float y);


float ponto_distancia(Ponto* p1, Ponto* p2 );