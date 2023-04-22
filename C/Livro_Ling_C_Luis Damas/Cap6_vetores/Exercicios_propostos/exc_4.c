#include <stdio.h> //estudar esse código

#define DIM 3
#define ESPACO ' '

//Declaração de Funções
void inici(char s[][DIM]);
void mostra(char s[DIM][DIM]);
int ganhou(char g[DIM][DIM], char ch);
int linha(char v[], char c);
int coluna(char g[DIM][DIM], int col, char ch);
int diagonal(char g[DIM][DIM], char ch);

//Inicia o tabuleiro
void inic(char s[][DIM]){
    int i, j;
        for(i=0; i<DIM; i++){
            for(j=0; j<DIM; j++){
                s[i][j] = ESPACO;
            }
        }
}

//Mostra o aspecto do tabuleiro
void mostra(char s[DIM][DIM]){
    int i, j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            printf("%c %c", s[i][j], j==DIM-1?' ':'|');
        }
        if(i!=DIM-1){
                printf("\n--------\n");
            }
    }
}
//Verifica se a n-ésima linha está preenchida com o char c
int linha(char v[], char c){
    return v[0] == v[1] && v[1] == v[2] && v[0] == c;
}

//Verifica se a coluna col está toda preechida com o char ch
int coluna(char g[DIM][DIM], int col, char ch){
    return g[0][col] == g[1][col] && g[1][col] == g[2][col] && g[0][col] == ch;
}

//Verifica se alguma das diagonais está preenchida totalmente com o char ch
int diagonal(char g[DIM][DIM], char ch){
    return (g[0][0] == g[1][1] && g[2][2] == g[1][1] && g[0][0] == ch) ||
    (g[0][2] == g[1][1] && g[2][0] == g[1][1] && g[0][2] == ch);
}

//Verifica se o jogador do caractere ch ganhou o jogo
int ganhou(char g[DIM][DIM], char ch){
    if(linha(g[0], ch) || linha(g[1], ch) || linha(g[2], ch))
        return 1;
    if(coluna(g,0,ch) ||coluna(g,1,ch) || coluna(g,2, ch))
        return 1;
    if(diagonal(g,ch))
        return 1;
    return 0; //não ganhou o jogo.
}

int main(){
    char velha[DIM][DIM];
    int posx, posy;
    char ch = '0'; //caractere a jogar
    int n_jogadas = 0;

    inic(velha);
    while (1) // laço infinito
    {
        mostra(velha);
        printf("\nIntroduza a posicao do jogo linha coluna: ");
        scanf("%d%d", &posx, &posy);
        if(posx > DIM || posy  > DIM){
            printf("\n\n**** Valores Invalidos ****\n\n");
                continue; //vai para a próxima iteração
        }    
        posx--;posy--; //os indices do vetor começam do  ZERO
        if(velha[posx][posy] == ESPACO){ // casa livre
            velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
            if(ganhou(velha, ch)){ //basta verificar o jogador  corrente
                printf("\n\n**** Ganhou o jogador %c ****\n\n", ch);
            break;
            }
        } 
        else
            printf("Posicao ja ocupada\njogue novamente!!!\n");
        if(n_jogadas==DIM*DIM){
            printf("\n\n**** Empate tecnico ****\n\n");
                break; //termina o laço
        }
    }
    mostra(velha);

}