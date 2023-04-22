#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_vogal(char ch){
   return(ch>=0 && ch<=9);   
}

int main(){
    char c;
    printf("Digite um caractere: ");
    c=getchar();
    if(!is_vogal(c)){//se o caractere digitado for diferente de numeros entre 0 e 9.
        putchar(c);
        if(c != toupper(c)){
            printf("\nMinuscula!\n");
        }else{
            printf("\nMaiuscula!\n");
            }        
    }else
        printf("Nao e um caractere valido.\n");

    system("pause");
}
