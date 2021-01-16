#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 5

typedef struct SPilha{
    int dados[SIZE];
    int topo;
}Tpilha;

Tpilha *p;

void criarpilha(Tpilha *p){
    p -> topo =  -1;
}

int pilhaVazia (Tpilha *p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}
int pilhaCheia (Tpilha *p){
    if (p-> topo == SIZE -1){
        return 1;
    }else{
        return 0;
    }
}
void pilhaInsere(Tpilha *p, int valor){
    if(pilhaCheia(p)==1){
        printf("\nERRO: pilha cheia!\n");
    }else{
        p-> topo++;
        p->dados[p->topo] = valor;
    }
}

int pilhaRemove (Tpilha *p){
    int aux;

    if(pilhaVazia(p) == 1){
        printf("\n ERRO: pilha vazia \n");
    }else{
        aux = p->dados[p->topo];
        p->topo--;
        return aux;
    }
}

void listarPilha (Tpilha *p){
    if(pilhaVazia(p) == 1){
        printf("\n ERRO: pilha vazia \n");
    }else{
        printf("\n Dados da Pilha \n");
        int i = p-> topo;
        for( i ; i >=0; i--){
            printf("[%d] -> %d\n", i ,p->dados[i]);
        }
    }
    system("pause");
}

int main(){
    Tpilha *p = (Tpilha*)malloc(sizeof(Tpilha));
    int opcao, aux, removido;
    criarpilha(p);
    

    while( opcao != 4){
        printf("\n ------------ \n");
        printf("\n [1]empilhar (push): \n");
        printf("\n [2]Desempilhar (pop): \n");
        printf("\n [3]Listar a Pilha: \n");
        printf("\n [4] Sair? \n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // push
                
                while(1){

                    printf("\n digite o elemento: \n");
                    scanf("%d",&aux);
                        if(pilhaCheia(p) == 0){
                            pilhaInsere(p,aux);
                        }else{
                            printf("\n Pilha cheia \n");
                            break;
                        }
                        
                }
                break;
            case 2:
                removido = pilhaRemove(p);
                printf("\n Valor removido [%d]", removido);
                break;
            case 3:
                listarPilha(p);
                break;
            case 4:
                system("exit");
                break;
            default:
                system("cls");
                printf("\nOpcao invalida. Valores de 1 - 4...\n");
                    //sleep(1);
        }

    }
    return 0;
}
