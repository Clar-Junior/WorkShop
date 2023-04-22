//Aula 8 - Vetor de struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3
#define tam_char 50

struct tipo_pessoa{
    char nome[tam_char];
    int idade;
    float peso;

};
typedef struct tipo_pessoa  tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    tipo_pessoa lista[TAM];
    int i;

    for(i=0; i<TAM; i++){
        printf("Insira os dados abaixo: \n");

        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);

    }
    system("cls");//chamada do comando 'cls' ou  'clear' do windows = limpa a tela.

    puts("Seus dados:\n" );
    for(i=0; i<TAM; i++){
        printf("---------Pessoa (%d) ---------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-----------------------------");
    system("pause");
}