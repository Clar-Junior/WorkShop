#include <stdio.h>

char linha (int num){
    int i;
    for(i=1; i<=num; i++){
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    linha(5);
    linha(10);
    linha(15);
    linha(10);
    linha(5);
}