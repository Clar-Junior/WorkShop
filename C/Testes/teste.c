#include <stdio.h>

int main()
{
    int num;
    printf("Hello World\n");
    printf("Escreva qualque número interio positivo: \n");
    scanf("%d", &num);

    if(num>=1)
    {
        printf("numero maior ou igual a 1\n");
    }

    return 0;
}