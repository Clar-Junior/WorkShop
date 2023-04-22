/*
Implemente um programa que leia 
o nome, a idade e o endereco de uma pessoa 
e armazene os dados em uma estrutura.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    char nome[TAM];
    int idade;
    char end[TAM];
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Atribuindo valores a struct do tipo_pessoa
    //atenção! separar por ',' e não ';'.
    tipo_pessoa pes = {"Fabiana", 29, "Rua do Cavaco"};;
   
    printf("Dados inseridos: \n");
    printf("pes.nome: %s\n", pes.nome);
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.end: %s\n", pes.end);
    puts("\n");

    //Alterando valores da struct tipo_pessoa
    //Atenção! Altera-se texto via função string copy = strcpy(destino, origem).
    strcpy(pes.nome, "Rodrigues");
    pes.idade = 31;
    strcpy(pes.end, "Rua Costa Dolorida");

    printf("Dados alterados: \n");
    printf("pes.nome: %s\n", pes.nome);
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.end: %s\n", pes.end);
    puts("\n");
    

    //Valores inseridos pelo usuário
    fflush(stdin);
    printf("Digite seu nome: ");
    scanf("%50[^\n]s", &pes.nome);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pes.idade);
    fflush(stdin);
    printf("Digite seu endereço: ");
    scanf("%50[^\n]s", &pes.end);
    fflush(stdin);

    system("cls");

    printf("Dados inseridos pelo usuário: \n");
    printf("pes.nome: %s\n", pes.nome);
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.end: %s\n", pes.end);
    puts("\n");

    system("pause");

}