#include <stdio.h>

void linha(void);// ou void linha()
int max(int n1, int n2);// ou int max(); ou int max(int , int). são equivalentes.

int main(){
    int n1, n2, resultado;
    linha();
    printf("digite 2 numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    resultado = max(n1, n2);
    linha();
    printf("%d e o maior!\n", resultado);
    linha();

}

void linha(void){
    int i;
    for(i=1; i<=40; i++){
        putchar('*');
    }
    putchar('\n');
}
int max(int n1, int n2){
    if(n1>n2)
        return n1;
    else
        return n2;
}
