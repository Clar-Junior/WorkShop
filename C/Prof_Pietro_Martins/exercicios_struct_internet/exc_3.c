/*
Construa uma estrutura aluno com nome, numero de matrıcula e curso. 
Leia do usuario a informacao de 5 alunos, armazene em vetor dessa estrutura
 e imprima os dados na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define totalAlunos 5

struct tipo_aluno{
    char nome[TAM];
    int numMat;
    char curso[TAM];

};
typedef struct tipo_aluno tipo_aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_aluno lista[totalAlunos];
    int i;
   
    for(i=0; i<totalAlunos; i++){
        printf("Digite seus dados abaixo: \n");
        printf("---------Aluno (%d)---------\n", i+1);

        printf("Nome: ");
        scanf("%s", &lista[i].nome);
        fflush(stdin);

        printf("Matricula: ");
        scanf("%d", &lista[i].numMat);
        fflush(stdin);

        printf("Curso: ");
        scanf("%s", &lista[i].curso);
        fflush(stdin);

        printf("----------------------------\n");
        }
        system("cls");

        puts("Dados por aluno:");
        for(i=0; i<totalAlunos; i++){
        printf("---------Aluno (%d)---------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tMatricula: %d\n", lista[i].numMat);
        printf("\tcurso: %s\n", lista[i].curso);
        }
        printf("----------------------------\n");
        system("pause");
}
