#include <stdio.h>

int soma(int x, int y){
    int res;
    res = x+y;
    return res;
}
int quadrado(int x){
    int quadrado;
    quadrado = x*x;
    
    return quadrado;
    
}

int main(){
    int x, y, resultado, quadrado1;
    printf("Introduza 2 numeros inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    resultado = soma(x,y);
    printf("%d + %d = %d\n", x, y, resultado);

    quadrado1 = quadrado(x);
    printf("%d * %d = %d\n", x, x, quadrado1);
    quadrado1 = quadrado(y);
    printf("%d * %d = %d\n", y, y, quadrado1);
}