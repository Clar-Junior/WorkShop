#include <stdio.h>
#define DIM 3
#define ESPACO ' '

/*
    Entendo o funcionamento do código.
 */
void  inic(char s[DIM][DIM]){
    int i, j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            s[i][j]= ESPACO;
        }
    }
}
void mostra(char s[DIM][DIM]){
    int i, j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            printf("%c %c", s[i][j], j==DIM-1?' ':'|');
        if(i!=DIM-1){
            printf("\n--------\n");
        }
    }
}

int main(){
    char velha[DIM][DIM];
    int position_x, position_y;
    char ch = '0'; /*Caractere para jogar*/
    int n_jogadas = 0;

    inic(velha);
    while (1) //laço infinito.
    {
        mostra(velha);
        printf("\nIntroduza a posição de jogo Linha e Coluna: ");
        scanf("%d %d", &position_x, &position_y);
        position_x--; //pois os índices do vetor começam em 0.
        position_y--; //pois os índices do vetor começam em 0.
       
        if(velha[position_x][position_y  == ESPACO]) //casa livre
        {
            velha[position_x][position_y] = ch = (ch == '0')? 'X': '0';
            n_jogadas++;
        }
        else
            printf("Posicao ja ocupada\nJogue novamente!\n");
        if(n_jogadas == DIM*DIM){
            break; //Acabar o programa. Encerra o game.
        }
    }    
}