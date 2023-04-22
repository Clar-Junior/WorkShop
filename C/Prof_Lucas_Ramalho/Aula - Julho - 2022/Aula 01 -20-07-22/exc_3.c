/*
Faça um algoritmo que 
1 - crie 2 vetores de 5 posições com nome e salário de funcionários.
    char  lista_nomes[5][10] = {"Jose", "Lucas", "Maria", "Juliana", "Murilo"};
    int salarios[5] = {7000, 30000, 12000, 3500, 0};
2 - O algoritmo deverá colocar os funcionários em ordem de salário crescente
3 - e imprimir o resultado.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char  lista_nomes[5][10] = {"Jose", "Lucas", "Maria", "Juliana", "Murilo"};
    int salarios[5] = {7000, 30000, 12000, 3500, 0};
    char i, nome_temp[10];
    int j, sal_temp;

    printf("Lista original: \n");
    for(i=0; i<5; i++){
        printf("Nome %d - %7s\t\tR$ %5d\n",i+1, lista_nomes[i], salarios[i]);
    }
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(salarios[i]>salarios[j]){
                sal_temp = salarios[i];
                salarios[i] = salarios[j];
                salarios[j] = sal_temp;

                strcpy(nome_temp, lista_nomes[i]);
                strcpy(lista_nomes[i], lista_nomes[j]);
                strcpy(lista_nomes[j], nome_temp);

            }
        }
    }
    printf("\nLista ordenada: \n");
    for(i=0;  i<5; i++){
        printf("Nome %d - %7s\t\tR$ %5d\n",i+1, lista_nomes[i], salarios[i]);
    }
    return 0;
}