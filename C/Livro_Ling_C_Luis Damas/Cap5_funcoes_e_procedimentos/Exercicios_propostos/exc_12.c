#include <stdio.h>
#include <stdlib.h>

int square(int x, int y){
   
    if(x == (y*y))
        printf("Verdadeiro");
    else
        printf("Falso.");
       
}

int main(){
    int x, y, compare;
    printf("digite dois numero: ");
    scanf("%d %d", &x, &y);
    //fflush(stdin); >desnecessário
    //scanf("%d", &y); >desnecessário
    square(x,y);
    //compare = square(x, y); >desnecessário
    //printf("%d", compare); >desnecessario

    system("pause");
}