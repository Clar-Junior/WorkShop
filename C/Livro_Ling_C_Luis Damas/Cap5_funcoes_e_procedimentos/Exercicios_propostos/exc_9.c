#include <stdio.h>
#include <stdlib.h>

int impar(int num){
    int op;
    op = num % 2;
    if(op != 0){
        printf("Verdade.\n");
    }
    else{
        printf("Falso.\n");
    }
}
int main(){
    int num, res;

    scanf("%d", &num);
    res = impar(num);

    system("pause");    
}