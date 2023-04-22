//Aula 8 - Estude Structs (registros) e
//Prof. Pietro Martins

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    //Atribuindo valores ao struct tipo_pessoa
    tipo_pessoa pes = {34, 79.82, "Júnior"};
    printf("Inicio: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    puts("\n");
    
    //Alterando valores no código
    pes.idade = 44;
    pes.peso = 59.88;
    strcpy(pes.nome,"Alda");

    printf("Valores alterados no código: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    puts("\n");
    
    //Valores inseridos pelo usuário
    printf("Digite uma idade: \n");
    scanf("%d", &pes.idade);
    fflush(stdin);
    printf("Digite um peso: \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Digite um nome: \n");
    scanf("%s", pes.nome);
    fflush(stdin);
    puts("\n");
    
    printf("Valores inseridos pelo usuário: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

}
