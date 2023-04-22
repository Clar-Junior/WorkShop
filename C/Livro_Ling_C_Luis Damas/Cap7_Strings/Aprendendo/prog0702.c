#include <stdio.h>

/* NOTAS
    1. as variáveis que recebem a string NUNCA são precedidas de &;
    2. A função SCANF realiza apenas a leitura de uma única palavra.
        exemplo: se escrever 'clarival junior', scanf lê apenas 'clarival' e ignora 'junior'.
*/

int main(){
    char nome[50];
    printf("Escreva seu nome completo: ");
    scanf("%s", nome);
    printf("Nome completo: %s\n", nome);




}