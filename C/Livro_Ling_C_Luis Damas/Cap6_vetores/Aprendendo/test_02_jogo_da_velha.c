#include <stdio.h>
#define DIM 3
//Montagem da Matriz



int main(){
    char velha[DIM][DIM] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int i, j; // i = linha , j = coluna.

    velha[0][0] = 'X';
    velha[1][1] = 'X';
    velha[0][2] = '0';
    velha[2][2] = '0';

    for(i=0; i<DIM; i++){

        for(j=0; j<DIM; j++)
            printf("%c %c", velha[i][j], j==DIM-1?' ':'|'); 
            /*Operador condicional '?': único operador térnário em C.
            condição?expressão1:expressão2
            ? = avalia a condição. Se verdadeia retorna 'expressão1', se falsa retorna 'expressão2'.
            */
        if(i!=DIM-1)
            printf("\n--------\n");        
    }




}