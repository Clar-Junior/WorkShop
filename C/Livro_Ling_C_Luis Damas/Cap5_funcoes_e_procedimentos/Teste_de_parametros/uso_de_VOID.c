#include <stdio.h>

int max(int n1, int n2){
    if(n1>n2)
        return n1;
    else
        return n2;
}/*Esse função devolve um tipo*/

void linha(int num, char ch){
    int i;
    for(i=1; i<=num;  i++){
        putchar('ch');
    }
    putchar('\n');    
}/*Essa função não devolve qualquer tipo, por isso usa-se VOID*/

/*
É habitual, também, econtrar a palavra reservada VOID para indicar que uma
função não receber qualquer parâmetro.
Os dois trechos abaixo são equivalentes:

void linha(){
    int i;
    for(i=1; i<=20; i++)
    {
        putchar('*');
    }    
    putchar('\n');
}

void linha(void){
    int i;
    for(i=1; i<=20; i++)
    {
        putchar('*');
    }    
    putchar('\n');
}

*/


int main(){

}