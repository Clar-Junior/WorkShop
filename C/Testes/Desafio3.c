#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("***Mercadinho do Zé***\n");
    printf("Lista de produtos: \n");
    printf("1 - Produto sem lactose.\n");
    printf("2 - Produto sem glúten.\n");
    printf("3 - Produto sem farinha.\n");
    printf("4 - Produto vencido.\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Voce escolheu: Produto sem lactose.\n");
        break;
    case 2:
        printf("Voce escolheu: Produto sem glúten.\n");
        break;
    case 3:
        printf("Voce escolheu: Produto sem farinha.\n");
        break;
    case 4:
        printf("Voce escolheu: Produto vencido.\n");
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
    system("pause");
    return 0;
}