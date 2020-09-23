#include "ListaLinearEstatica.h"
#include <stdio.h>
#include <stdlib.h>
//cria a estrutura da lista
struct lista
{
    int quantidade;
    //cria a estrutura dos elementos que serão inseridos na lista
    //o esboço da estrutura se encontra na lib ListaLinearEstatica.h
    struct aluno dados[MAX]
    
};
//Inicia a implementação da função de criação da lista que tambem se encontra na lib ListaLinearEstatica.h
Lista* cria_lista(){
    //Criasse um ponteiro pra lista
    Lista *li;
    //É atribuido um espaço na memoria para a estrutura lista
    li = (Lista*) malloc(sizeof(struct lista));
    //Se li for diferente de null foi criado com sucesso
    if (li != NULL )
    {
        //Então é atribuido o valor 0 para o numero de elementos na lista
        li->quantidade = 0;
    }
    //Pra finalizar retorna a lista criada
    return li;
    
};

void libera_lista(Lista* li){
    //Ja que utilizamos malloc é bem simples da liberar a lista é so usar a função free
    free(li);
}   
int tamanho_lista(Lista* li){
    //Se a lista for nula
    if (li==NULL)
    {
        //retornara -1 como codigo de erro
        return -1;
    }
    else
    {
        //Senão retorna a quatidade da lista
        return li->quantidade;
    }
    
}
int lista_cheia(Lista* li){
    //verifica se a lista é nula
    if (li==NULL)
    {
        //se for ela vai retornar -1 como tratamento de erro
        return -1;
    }
    //Verifica se a lista tem quantidade igual a o tamanho maximo
    return(li->quantidade==MAX);
}
int lista_vazia(Lista* li){
        //verifica se a lista é nula

    if (li==NULL)
    {
        //se for ela vai retornar -1 como tratamento de erro
        return -1;
    }
    //Verifica se a lista tem quantidade igual a 0
    return(li->quantidade==0);
}
int insere_final_lista(Lista* li, struct aluno al){
    //Se a lista for null retorna 0
    if (li == NULL)
    {
        return 0;
    }
    //Se a lista estiver cheia retorna 0
    if (lista_cheia(li))
    {
        return 0;
    }
    //Atribui os dados ao ultimo elemento selecionado no array
    li->dados[li->quantidade] = al;
    //passa pro proximo
    li->quantidade++;    
}
int insere_inicio_lista(Lista* li, struct aluno al){
        //Se a lista for null retorna 0
    if (li == NULL)
    {
        return 0;
    }
    //Se a lista estiver cheia tambem encerra a incerção
    if (lista_cheia(li))
    {
        return 0;
    }
    //Alocando uma posição a frente cada elemento do array
    for (int i = li->quantidade-1; i >=0; i--)
    {
        //atribuindo o valor do elemento anterior para a proxima posição do array
        li->dados[i+1] = li->dados[i];   
    }
    //colocando o valor atribuido de al no elemento qual o indice é igual a 0 ou seja o primeiro
    li->dados[0] = al;
    return 1;
}
int insere_lista_ordenada(Lista* li, struct aluno al){
    //Se a lista for null retorna 0 e encerra a incerção
    if (li == NULL)
    {
        return 0;
    }
    //Se a lista estiver cheia tambem encerra a incerção
    if (lista_cheia(li))
    {
        return 0;
    }
    
    int k, i = 0;
    //fazendo uma buscar pelos elementos e verificando
    //enquanto a posição atual for menor que a quantidade total de elementos
    //e a matricula da estrutura aluno referente aquele indice for menor que a
    //matricula do aluno que esta sendo inserido
    while (i<li->quantidade && li->dados[i].matricula<al.matricula)
    {
        i++;
    }
    //Agora fazemos igual a inserção no inicio da lista
    //Passamos todos os elemntos para o procimo indice ate ficarmos
    //com o primeiro da lista vago
    for (k = li->quantidade-1; i < k>= i; i--)
    {
        //atribuindo o valor do elemento anterior para a proxima posição do array
        li->dados[k+1] = li->dados[k];
    }
        //colocando o valor atribuido de al no elemento qual o indice indica o qual esta vazio
    li->dados[i] = al;
    li->quantidade++;
    
    
}


int main(int argc, char const *argv[])
{
    Lista *li;
    li = cria_lista();
    libera_lista(li);
    tamanho_lista(li);
    int x = lista_cheia(li);
        if(lista_cheia(li));
    int x = lista_vazia(li);
        if(lista_vazia(li));
    int x = insere_final_lista(li , dados_aluno);
    int x = insere_inicio_lista(li , dados_aluno);
    return 0;
}

