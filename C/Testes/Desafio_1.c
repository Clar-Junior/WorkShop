#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2, op;

    printf("Ola! Escolha dois numeros e a operacao matematica a ser feita.\n");
    printf("Digite o primeiro numero.");
    scanf("%d", &num_1);
    printf("Digite o segundo numero.");
    scanf("%d", &num_2);
    printf("Agora escolha uma das operações matematica abaixo: \n");
    printf("*** 1 - soma, 2 - subtracao, 3 - divisao, 4 - multiplicacao ***\n");
    scanf("%d", &op);
    printf("Digite 0 p/ sair.\n");

    while(op != 0)
    {
    switch(op)
        {
        case 1:
            printf("%d + %d = %d.\n", num_1, num_2, num_1+num_2);
            break;
        case 2:
            printf("%d - %d = %d.\n", num_1, num_2, num_1-num_2);
            break;
        case 3:
            printf("%d / %d = %d.\n", num_1, num_2, num_1/num_2);
            break;
        case 4:
            printf("%d * %d = %d.\n", num_1, num_2, num_1*num_2);
            break;
        default:
            printf("Operaçao invalida!!!\n");
            break;
        }
            printf("Digite 0 p/ sair ou qualquer outro numero para continuar.\n");
            scanf("%d", &op);
            printf("Digite o primeiro numero.");
            scanf("%d", &num_1);
            printf("Digite o segundo numero.");
            scanf("%d", &num_2);
            printf("*** 1 - soma, 2 - subtracao, 3 - divisao, 4 - multiplicacao ***\n");
            scanf("%d", &op);
    }
    system("pause");

    return 0;

}