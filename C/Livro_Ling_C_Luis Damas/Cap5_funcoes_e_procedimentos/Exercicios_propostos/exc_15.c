#include <stdio.h>
#include <stdlib.h>

int cubo(int x){
    return x*x*x;
}

int main(){
    int x, ao_cubo;
    printf("Digite um numero para sabe seu resultado elevado ao cubo: ");
    scanf("%d", &x);
    ao_cubo  = cubo(x);
    printf("%d elevado ao cubo = %d\n", x, ao_cubo);    
    system("pause");
}