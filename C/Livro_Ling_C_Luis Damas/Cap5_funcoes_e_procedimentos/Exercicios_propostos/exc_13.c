#include <stdio.h>
#include <stdlib.h>

int negativo(int x){

    x = x*(-1);
    printf("%d\n", x);
}

int main(){

    int x;
    printf("Digite um numero e o veja negativo: ");
    scanf("%d", &x);
    negativo(x);

    system("pause");
}