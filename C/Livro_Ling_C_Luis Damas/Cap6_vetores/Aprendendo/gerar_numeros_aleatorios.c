#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nums 60             //Total de numeros do jogo
#define aposta_minima 6     //aposta minima = 6 numeros
#define num_linha 10         //numero em cada linha = 10 numeros por linha
//srand() = seed random

/*
    funções para o exercício
    1- start_random()       >inicia o gerador de nºs aleatorios com um nº q depende da hora que se executa a função
    2- start()              > inicia com ZERO o vetor de controle dos nºs selecionados.
    3- escolha_num_aposta() > lô no nº de numeros a apostar, aceita valores de aposta_minima a nums( de 6 a 49)
    4- num_aleatório()      > gera um numero aleatório e marca o vetor como 'selecionado'
    5- mostrar_resutlado()  > apresentar o formato do 'volante'(não sei o q significa ainda) colocando XX nos nºs selecionados para a aposta.
*/
//Sequencia de  funções para execução
void start_random();
void start(int v[nums]);
int escolha_num_aposta();
void num_aleatorio(int *v, int n);
void mostrar_resultado(int res[]);


//1- start_random()       >inicia o gerador de nºs aleatorios com um nº q depende da hora que se executa a função
void start_random(){
    long ultime;
    time_t time(&ultime);
    srand((unsigned) ultime);
}

//2- start()              > inicia com ZERO o vetor de controle dos nºs selecionados.
void start(int v[]){           //>ou seja, insere 0 em  todos as posições dos vetores, do 0 ao 48.
    int i;
    for(i=0; i<nums; i++){
        v[i]=0;
    }
}

//3- escolha_num_aposta() > lô no nº de numeros a apostar, aceita valores de aposta_minima a nums( de 6 a 49)
int escolha_num_aposta(){
    int n;

    do{
        printf("Quantos nºs  quer apostar? (0 - Encerrar programa): \n");
        scanf("%d", &n);
    }
    while((n<aposta_minima || n>nums) && n!=0);
    return n;
}

//4- num_aleatório()      > gera um numero aleatório e marca o vetor como 'selecionado'
void num_aleatorio(int *v, int n){
    int i, indice;
    for(i=1; i<=n; i++){
        indice = rand()%nums;   //devole um nº aleatorio entre 0 e nums-1
        if(v[indice] == 0)      //se for igual a 'zero'= não foi selecionado
            v[indice] = 1;      //alterar para 1 que significa 'selecionado'
        else                    //se o vetor já foi selecionado
            i--;                //isso significa que voltamos a calcular esse numero da aposta decrementando o i,isso até encontrar um vetor que nao esteja selecionado
    }
}

//5- mostrar_resutlado()  > apresentar o formato do 'volante'(não sei o q significa ainda) colocando XX nos nºs selecionados para a aposta.
void mostar_resultado(int res[]){
    int i;

    for(i=0;i<nums; i++){
        if (res[i] == 0)
        {
            printf("%2d", i+1);
        }
        else
            printf(" XX");
        if((i+1)%num_linha == 0)
            putchar('\n');
        
    }
    putchar('\n');
}

int main(){
    int vetor[nums];
    int n_nums;         //nºs de numeros para jogar no jogo de 6 a 49

    start_random();
    while(1){
        start(vetor);
        if((n_nums = escolha_num_aposta == 0)){
            break;
        }
        num_aleatorio(vetor, n_nums);        //gerar os nºs a apostar
        mostar_resultado(vetor);        
    }
}