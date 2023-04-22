#include<stdio.h>
#include<string.h>

/*
Escreva um programa que leia nomes e sobrenomes de pessoas e os mostre na tela no formato
Sobrenome, Nome. 
O programa deve terminar quando um nome vazio for introduzido.
*/

#define DIM 20
#define SEP_NOME ", "

int main(){
    char Nome[DIM+1], Sobrenome[DIM+1], Completo[2*DIM+1];
    while(1){
        printf("Nome: ");
        gets(Nome);
        
        if(strlen(Nome) == 0) break;        /*Terminar o programa*/
            /*colocar o Sobrenome, Nome na string Completo*/
        printf("Sobrenome: ");
        gets(Sobrenome);
        strcpy(Completo, Sobrenome);        /*copiar o Sobrenome para a variável 'Completo' de tamanho 42*/
        strcat(Completo, SEP_NOME);         /*juntar o separador, como resultado = (completo", ")*/
        strcat(Completo, Nome);             /*juntar o primeiro nome, como resultado = (completo", ""Nome")*/
        puts(Completo);

    }
}