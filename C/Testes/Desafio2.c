#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, operador; 
    float resultado;

    printf("Calculadora\n");
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num1);
    printf("Digite uma operação: \n1=soma, 2=subtrai, 3=multiplica, 4=dividi\n");
    scanf("%d", &operador);
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num2);

    
        switch (operador)
            {
            case 1:
                printf("Resultado = %d\n", (num1+num2));
                break;
            case 2:
                printf("Resultado = %d\n", (num1-num2));
            case 3:
                printf("Resultado = %d\n", (num1*num2));
                break;
            case 4:
                printf("Resultado = %d\n", (num1/num2));
                break;
            
            
            default:
                printf("Operador Invalido!!!");
                break;
            }
           
     
    system("pause");
    return 0;
}