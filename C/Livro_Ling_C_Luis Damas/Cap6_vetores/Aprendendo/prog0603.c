#include <stdio.h>

int ini_zero(int s[], int n){//função para definir todos os indices com valor zero.
    int i;
    for(i=0; i<n; i++){
        s[i]=0;
        printf("%d ", s[i]);
    }
    putchar('\n');
}

int main(){
    int i;
    int s[10];
    int x[25];
    int n;

    printf("Digite a dimensao do vetor: ");
    scanf("%d", &i);
    if(i == 10){
        ini_zero(s, i);
    }else if(i == 25){
        ini_zero(x, i);
    }else
        printf("Erro!\n");   



}