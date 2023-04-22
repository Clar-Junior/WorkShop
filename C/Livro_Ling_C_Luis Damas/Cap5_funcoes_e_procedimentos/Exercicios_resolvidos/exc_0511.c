#include <stdio.h>
/*
Devolve o valor de x^n
    x^0=1.0
    x^n=x^*,x^*....x^n(n vezes)
*/

float pot(float x, int n)
{
    float result;
    int i;

    for (i=1, result=1.0; i<=n;  i++)
        result*=x; /*resultado  = resultado * x; */
        
    return result;
}

int main()
{
    printf("%f %f %f", pot(2.0, 40), pot(1.234, 3), pot (3.0,  0));
}