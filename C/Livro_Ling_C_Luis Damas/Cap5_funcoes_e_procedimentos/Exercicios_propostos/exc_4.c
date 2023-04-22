#include <stdio.h>

int abs(int num){
    int absoluto, invert;
    if(num>=0)
        return num;
    else(num<0);
        invert = num-(-num*2); //inverte o número negativo para seu valor positivo.
        return invert;

}

int main(){
    int absoluto, resultado;

    /*printf("Digite e descubra qual o absoluto de x: ");
    scanf("%i", &absoluto);
    */
    resultado = abs(-5);
    printf("O absoluto de x = %d", resultado);

    return 0;
}