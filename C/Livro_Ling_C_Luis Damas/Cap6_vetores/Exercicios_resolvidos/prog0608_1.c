/*
    Implemente a função
    
    char *memset(char *[], char ch, int n)

    que coloca nas n primeiras posições do 
    veto v o caractere ch, devolvendo o próprio vetor v.
*/
#include <stdio.h>
#include <string.h>

 int main(){
    char str[50];

    //sem usar memset
    strcpy(str, "Funcionamento da função memset");
    puts(str);

    //com a função memset
    memset(str, '%', 7); //troca os 7 primeiros caracteres, pode ser qq número
    puts(str);

    return 0;
 }