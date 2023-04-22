#include <stdio.h>

int  transform_to_upper (char ch)
{
    if (ch>= 'a' && ch <='z' ) /*se forem digitadas minusculas*/
        return ch + 'A'  - 'a';
    else
        return ch; /*devolve o caractere digitado que ja e maisculo*/
}
/*essa funcao transforma  caracteres minusculos em maiusculos, caso ja seja
maiuscula, a funcao devolve o proprio maiusculo*/

int main()
{
    char c;
    while(1) /*termina a execucao se apertar ctrl-c*/
        {
            c=getchar();
            putchar(transform_to_upper(c));
        }    
}