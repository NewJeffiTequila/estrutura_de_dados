#define MAX 100
struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct lista Lista;

Lista* cria_lista();