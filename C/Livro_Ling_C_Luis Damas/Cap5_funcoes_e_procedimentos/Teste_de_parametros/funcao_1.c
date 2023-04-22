#include <stdio.h>

int maior (int num1, int num2){

    if(num1>num2)
        return num1;
    else
        return num2;
}

int main(){
    int n1, n2, resultado;
    printf("Descubra quem é maior\n");
    printf("Insira 2 numero inteiros: \n");
    scanf("%d %d", &n1, &n2);

    resultado = maior(n1, n2);
    printf("%d é o maior", resultado);

    return 0;
    
    /*
    int x, y;
    x = 4;
    y = 5;

    printf("X=4\tY=5.X e igual a Y? \n");
    if(x == y)
        printf("Verdadeiro\n");
    else
        printf("Falso\n");
    */

}