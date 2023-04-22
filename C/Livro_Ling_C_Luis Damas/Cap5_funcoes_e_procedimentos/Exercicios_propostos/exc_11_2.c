#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//testando exercicios do 11.2 a 11.8
//11.2 = isalpha > se é uma letra do alfabeto, maiuscula ou minuscula.
//11.3 = isalnum > se é um caractere alfanumerico.
//11.4 = islower : se uma letra é minuscula.
//11.5 = isupper > se uma letra é MAIUSCULA.
//11.6 = isspace : se é um space ou um TAB.
//11.7 = tolower > transforma em minuscula.
//11.8 = toupper > transforma em MAIUSCULA.


int main(){
    char c;
    printf("digite um caractere: ");
    c = getchar();
    if(isalpha(c)){
        printf("%c\n", c=toupper(c));
        /*
        ou
            c = toupper(c);
            printf("%c\n", c);
        */
    }else
        printf("Falso.\n");

    return 0;
}