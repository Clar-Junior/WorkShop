#include <stdio.h>

int x_isdigit (char ch)
{
    return (ch >='0' && ch <='9');
    /*escreve todos os caracteres não digitos*/
}

int main()
{
    char c;  
    while(1) /*termina a execucao se apertar CTRL-C*/
    {
        c=getchar();
        if(!x_isdigit(c)) /*se não for digito*/
            putchar(c);         
    }
}