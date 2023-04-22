#include <stdio.h>

/*
A função GETS permite colocar, na variável que recebe por parâmetro, todos os caracteres
introduzidos pelo utilizador. Ao contrário da função SCANF, essa função não está limitada
à leitura de uma única palavra.
    exemplo: se escrevo 'clarival junior' gets lê 'clarival junior' ou tudo o que escrevi.
*/

int main()
{
    char nome[50];
    printf("Escreva seu nome completo: ");
    gets(nome);
    printf("Nome completo: %s\n", nome);
}