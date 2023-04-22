#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    printf("digite um caractere: ");
    fflush(stdin); //limpa o buffer de entrada de dados.
    c=getchar();
    if(isdigit(c))
        printf("\t%c\n", c);
    else
        printf("Vc nao digitou um numero.\n");
    }
