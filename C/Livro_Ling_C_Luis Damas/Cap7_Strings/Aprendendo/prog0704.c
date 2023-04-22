#include <stdio.h>

/*
Escreva um programa que leia nomes e os apresente na tela até que um nome vazio seja
introduzido pelo operador.
 */
int main(){
    char nome[100];
    
    while(1){       //laço infinito
        puts("nome: ");
        gets(nome);
        if(nome[0]=='\0'){  //se a string estiver vazia
            break;          //terminar o laço
        }
        else
            printf("Nome escrito: %s\n", nome);
    }
}