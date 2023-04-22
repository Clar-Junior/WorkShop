#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 5;
    int guess_palpite;
    int guesses_palpites;
    int answer_resposta;

    //usa o hora atual como "semente" para que rand a cada execução gere números aleatórios diferentes.
    //sem srand a função rand irá gerá a mesma sequência de números aleatórios a cada execução, pois 'entenderá' srand como (1).
    srand(time(0));

    //gera um número aleatório entre MIN e MAX
    answer_resposta = (rand() % MAX) + MIN;

    //printf("%d", answer);

    do{
        printf("Enter a guess = Insira um palpite: ");
        scanf("%d", &guess_palpite);
        if(guess_palpite > answer_resposta)
        {
            printf("Muito alto!\n");
        }else if (guess_palpite < answer_resposta)
        {
            printf("Muito baixo!\n");
        }else
        {
            printf("Correto!\n");
        }
        guesses_palpites++;

    }while(guess_palpite != answer_resposta);

    printf("***********************\n");
    printf("answer_resposta: %d\n", answer_resposta);
    printf("guesses_palpites: %d\n", guesses_palpites);
    printf("***********************\n");




    return 0;
}