#include <stdio.h>
#include <stdlib.h>

++int main()
{
    int ped1=0, cont=0;
    float total=0, taxa_entrega=15;
    

    printf("Pizzaria Italiana\n");
    printf("Escolha seu pedido abaixo\n");
    printf("1.Calabresa - R$65,00 \n2.Nordestina - R$45,25 \n3.Lombo Canadense - R$55,50 \n");
    printf("4.Marguerita - **PROMO** R$39,99 \n5.Napolitana - R$65,00 \n6.Frango com Catupiri - R$99,90\n");
    printf("****Digite o numero da pizza que quer pedir****\nPara fechar o pedido digite 0.\n\n\n");
    scanf("%d", &ped1);

    while(ped1>0){    
        switch(ped1)
        {
            case 1:
                printf("Pizza de Calabresa - R$65,00\t");
                total= total + 65,00;
                cont++;
                scanf("%d", &ped1);
                break;
            case 2:
                printf("Pizza Nordestina - R$45,25\t");
                total= total + 45,25;
                cont++;
                scanf("%d", &ped1);
                break;
            case 3:
                printf("Pizza de Lombo Canadense - R$55,50\t");
                total= total + 55,50;
                cont++;
                scanf("%d", &ped1);
                break;
            case 4:
                printf("Pizza de Marguerita - **SUPER-PROMO** R$39,99\t");
                total= total + 39,99;
                cont++;
                scanf("%d", &ped1);
                break;
            case 5:
                printf("Pizza Napolitana - R$65,00\t");
                total= total + 65,00;
                cont++;
                scanf("%d", &ped1);
                break;
            case 6:
                printf("Pizza de Frango com Catupiri - R$99,90\t");
                total= total + 99,90;
                cont++;
                scanf("%d", &ped1);
                break;
            default:
                printf("Peça novamente!!!");
                scanf("%d", &ped1);
                break;
        }
    }
    
    printf("******************************************\n");
    printf("Taxa de entrega = %.2f\n", taxa_entrega);
    printf("%d pizza(s) pedida(s)!\nValor total = %.2f\n", cont, total+taxa_entrega);
    printf("Obrigado pela preferencia. Volte Sempre!!!\n");
    printf("******************************************\n");

    system("pause");

}
