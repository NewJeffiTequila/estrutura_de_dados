#define MAX 100
struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct lista Lista;

Lista* cria_lista();
void libera_lista();
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_final_lista(Lista* li, struct aluno al);
int insere_inicio_lista(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);

