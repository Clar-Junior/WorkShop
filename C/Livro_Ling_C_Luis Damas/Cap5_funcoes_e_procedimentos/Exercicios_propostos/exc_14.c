#include <stdio.h>
#include <stdlib.h>

int is_special(int x){
    return x*2;    
}
int square(int x){
    return x*x;
}

int main(){
    int x, dobro, sqr;
    printf("Digite um numero: ");
    scanf("%d", &x);
    dobro = is_special(x);
    sqr = square (x);
        if(dobro == sqr){
            printf("Verdadeiro.\n");
        }else
            printf("Falso.\n");
        
    system("pause");
}
