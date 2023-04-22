#include <stdio.h>
/*
*Implementando funções
*/

char asteristico()
{
    int i;
    for(i=1; i<=25; i++)
    {
        putchar('*');
    }
    putchar('\n');
}
//Essa função insere 25 asteriscos nas tela e uma quebra de linha ao final.


int main()
{
    int i;  

    asteristico();
    puts("\tNumeros entre 1 e 5");
    asteristico();
    for(i=1; i<=5; i++){
        printf("\t%d", i);
    }
    putchar('\n');
    asteristico();

}