#include <stdio.h>
#include <stdlib.h>

int limite(int x){
    int lim_inf=0, lim_sup=18;

    if(x>=lim_inf && x<=lim_sup){
        printf("ok!\n");
    }
    else
        printf("fora do intervalo.\n");
}

int main(){
    int x, intervalo;
    printf("Descubra se esta dentro do limite de idade para se alistar: ");
    scanf("%d", &x);
    intervalo = limite(x);

    system("pause");
}