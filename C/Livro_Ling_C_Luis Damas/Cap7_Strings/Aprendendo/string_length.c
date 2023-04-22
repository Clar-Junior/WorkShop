#include <stdio.h>
#include <string.h>

int tamanho(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        ;
    }
    s[i] = '\0';
    return i;
}
// funcionou no c compiler mas aqui apresenta erro
/* por que?
int main()
{
    char palavra[40] = {"o rato roeu a roupa do rei de roma"};
    // conta-se os espaço também.

    tamanhos(palavra);
    printf("%s tem %d caracteres.\n", palavra, *palavra);
}
*/
//essa funcionou
int main(){
    char palavra[15] = {"universo"};
    
    
    printf("Tamanhos = %s possui %d caracteres.\n", palavra, tamanho(palavra));
    printf("Strlen = %s possui %d caracteres.\n", palavra, strlen(palavra));
}