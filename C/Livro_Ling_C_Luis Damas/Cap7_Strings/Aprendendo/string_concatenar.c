#include <stdio.h>
#include <string.h>

//função *strcat concatena string1 com string2 - sem espação, sem qq caracter

char concatenar(char *dest, char *orig){
    int i, len;
    for(i = 0, len = strlen(dest) ; orig[i]!='\0'; i++, len++){
        dest[len] = orig[i];
    }
    dest[len]= '\0';
    return dest;
}
int main(){
    /*importante destacar que o tamanho da variável 
    que recebe as strings deve ter tamanho que suporte 
    a junção das strings*/
    char nome1[10] = {"gira"};
    char nome2[10] = {"ssol"};

    //chamada da função concatenar
    concatenar(nome1, nome2);

    //nome1 recebe o resultado da função concatenar
    printf("%s", nome1);
}