/*Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números*/
#include <stdio.h>
#include <stdlib.h>
#define max 4

int main(int argc, char *argv[]){
    int n[4]; 
    int soma, i;
    soma = 0;

    for(i=0; i<max; i++){
        printf("Digite um numero %d: ", i+1);
        scanf("%d", &n[i]);
        soma =  soma + n[i];
    }
    //system("cls");
    printf("n1: %d\nn2: %d\nn3: %d\nn4: %d\n", n[0],  n[1], n[2], n[3]);
    printf("Total da soma de todos os numeros: %d\n", soma);
    
    system("pause");
    return 0;
}