/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovacao
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define totalAlunos 2
#define medapv 60.00

struct curso_aluno {
    int numMat;
    char nome[TAM];
    float prova1, prova2, prova3;
    
};
typedef struct curso_aluno curso_aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");

    curso_aluno lista[totalAlunos];
    int i;

    // a) Permita ao usuario entrar com os dados de 5 alunos.
    for(i=0; i<totalAlunos; i++){
        printf("Insira seus dados: \n");
        printf("----------- Aluno (%d) -----------\n", i+1);
        
        printf("Número da Matrícula: ");
        scanf("%d", &lista[i].numMat);
        fflush(stdin);

        printf("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);
        
        printf("Nota da primeira prova: ");
        scanf("%f", &lista[i].prova1);
        fflush(stdin);

        printf("Nota da segunda prova:  ");
        scanf("%f", &lista[i].prova2);
        fflush(stdin);

        printf("Nota da terceira prova: ");
        scanf("%f", &lista[i].prova3);
        fflush(stdin);
        
        printf("----------------------------\n\n");
    }
    system("cls");
    for(i=0; i<totalAlunos; i++){
    printf("NumMat: %d\nNome: %s\np1: %.2f\np2: %.2f\np3: %.2f\n\n", lista[i].numMat, lista[i].nome, lista[i].prova1, lista[i].prova2, lista[i].prova3);
    }

    // (b) Encontre o aluno com maior nota da primeira prova.
    //para descobrir a maior posso tentar com a varíavel 'temp' para armazenar a maior
    if ( lista[0].prova1 > lista[1].prova1 && lista[0].prova1 > lista[2].prova1 )
        printf("Maior nota na primeira prova: %.2f\n\n",lista[0].prova1);
    else if(lista[1].prova1 > lista[0].prova1 && lista[1].prova1 > lista[2].prova1 )
        printf("Maior nota na primeira prova: %.2f\n\n",lista[1].prova1);
    else if(lista[2].prova1 > lista[0].prova1 && lista[2].prova1 > lista[1].prova1 )
        printf("Maior nota na primeira prova: %.2f\n\n",lista[2].prova1);
    else
    {
        printf("Empate!\n");
    }
    
    // (c) Encontre o aluno com maior media geral.
    //está imprimindo todas as médias, melhorar para apresentar só a maior
    float temp[totalAlunos];

    for(i=0; i<totalAlunos; i++){
        temp[i] = (lista[i].prova1 + lista[i].prova2 + lista[i].prova3)/3;
        printf("Media geral de %s = %.2f\n", lista[i].nome, temp[i]);
    }
    puts("\n");

    if(temp[0] > temp[1] &&  temp[0] > temp[2]){
        printf("A maior media geral  e: %.2f\n\n", temp[0]);
    }
    if (temp[1] > temp[0] && temp[1] > temp[2]){
        printf("A maior media geral  e: %.2f\n\n", temp[1]);
    }
    if(temp[2]> temp[0] && temp[2] > temp[1]){
        printf("A maior media geral  e: %.2f\n\n", temp[2]);        
    }

    //(d) Encontre o aluno com menor media geral
    float minMed[totalAlunos];

    for(i=0; i<totalAlunos; i++){
        minMed[i] = (lista[i].prova1 + lista[i].prova2 + lista[i].prova3)/3;
            }
    puts("\n");

    if(minMed[0] < minMed[1] &&  minMed[0] < minMed[2]){
        printf("A menor media geral  e: %.2f\n", minMed[0]);
    }
    if (minMed[1] < minMed[0] && minMed[1] < minMed[2]){
        printf("A menor media geral  e: %.2f\n", minMed[1]);
    }
    if(minMed[2] < minMed[0] && minMed[2] < minMed[1]){
        printf("A menor media geral  e: %.2f\n", minMed[2]);        
    }

    //(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
    //aprovacao
    
    for(i=0; i<totalAlunos; i++){
        if(temp[i] >= medapv){
            printf("%s esta Aprovado!\n", lista[i].nome);
        }else{
            printf("%s esta Reprovado!\n", lista[i].nome);
        }
    }
    
    system("pause");
}