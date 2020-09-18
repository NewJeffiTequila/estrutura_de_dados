#include<stdio.h>
#include <stdlib.h>
#define SIZE 10

int id[SIZE];
char pass[SIZE][20];
int control = 0;

void Adicionar(int id[] , char password[][20] , int size){
    int cont;
    for( int x = 0 ; x < size ; x++){
        if(id[x] == 0){
            cont = x + 1;
            id[x] = cont;
            printf("\n Senha: ");
            scanf("%s",&pass[x][0]);
            printf("\n ----------------");
        }

    }
}

void Exibir(int id[] , char password[][20]  , int size){
    for( int x = size - 1 ; x >= 0 ; x-- ){
        printf("\n id[%d] -> password[%s]", id[x] , password[x]);
    }
    }

void Buscar(int id[] , char password[][20] , int size){
    int count;
    printf("\n Id: ");
    scanf("%d",&count);
    for(int x = 0 ; x < size ; x++){
        if(id[x] == count){
            printf("\n id[%d] -> password[%s]" , id[x] , password[x]);
        }
    }

}

void Excluir(int id[] , char password[][20] , int size){
    int count;
    printf("\n Id: ");
    scanf("%d",&count);
    for(int x = 0 ; x < size ; x++){
        if(id[x] == count){
            id[x] = 0;
            password[x][0] =  NULL;
        }
    }
}

void Limpar(int id[] , char password[][20] , int size){
    for(int x = 0 ; x < size ; x++){
            id[x] = 0;
            password[x][0] =  NULL;
        }

        printf("\n A Pilha Esta Limpa!");
    }




int main(){
        while(control != 5){
    printf("\n Escolha uma opcao: \n");
    printf("\n 1 - Adicionar  \n");
    printf("\n 2 - Exibir \n");
    printf("\n 3 - Buscar \n");
    printf("\n 4 - Excluir \n");
    printf("\n 5 - Sair \n ");
    printf("\n 6 - Limpar Pilha \n");
    printf("\n ------------------- \n");
    scanf("%d",&control);

    switch( control){
    case 1 :
      Adicionar( id ,pass , SIZE);
        printf("\n \n");
        break;
    case 2:
       Exibir( id ,pass, SIZE);
         printf("\n \n");
        break;

    case 3:
        Buscar(id ,pass , SIZE);
        printf("\n \n");
        break;

    case 4:
        Excluir( id , pass , SIZE);
        printf("\n \n");
        break;



    case 6 :
        printf("\n \n");
        Limpar(id , pass , SIZE);
        printf("\n \n");
        break;
    }
    }

return 0;
}
