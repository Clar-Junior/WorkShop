/*
Exercício:
Faça um algoritmo que 
1 - crie uma lista de 5 nomes, 
2 - um vetor com 5 alturas, 
3 - um vetor com 5 pesos dessas pessoas. 
4 - O algoritmo deverá realizar a varredura dos vetores 
5 - e dizer quem tem a maior altura 
6 - e também que tem o maior peso.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char lista_nomes[5][10] = {"Adriano", "Beatriz", "Cleiton", "Dayane", "Everton"};
    char nome_peso[10], nome_altura[10];
    int peso[5]= {85, 60, 165, 75, 100};
    int maior_peso = 0, i;
    float altura[5] = {1.80, 1.75, 1.65, 1.87, 2.02};
    float maior_altura = 0.00;

    for(i=0; i<5; i++){
        printf("%s\t%4dkg\t%.2f\n", lista_nomes[i], peso[i], altura[i]);
    }
    putchar('\n');

    for(i=0; i<5; i++){
        if(peso[i]>maior_peso){
            maior_peso = peso[i];
            strcpy(nome_peso, lista_nomes[i]);
        }        
            if(altura[i]>maior_altura){
            maior_altura = altura[i];
            strcpy(nome_altura, lista_nomes[i]);
            }          
        
    }
    printf("%s tem o maior peso = %d\n", nome_peso, maior_peso);
    printf("%s tem a maior altura = %.2f\n", nome_altura, maior_altura);

    return 0;
}