/*
Escreva um programa que, recorrendo a três funções distintas,
escreva na tela a seguinte saída

***
*****
*******
*****
***

*/
#include <stdio.h>

char ast_3x()
{
    int i;
    for(i=1; i<=3; i++){
        putchar('*');
    }
    putchar('\n');
}
char ast_5x()
{
    int i;
    for(i=1; i<=5; i++){
        putchar('*');
    }
    putchar('\n');
}
char ast_7x()
{
    int i;
    for(i=1; i<=7; i++){
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    ast_3x();
    ast_5x();
    ast_7x();
    ast_5x();
    ast_3x();
}