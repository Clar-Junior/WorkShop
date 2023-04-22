#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char questions_perguntas [][100] = {"1. Quantas vezes a selecao brasileira e campea mundial?: ",
                                        "2. Daniel Alves a jogador de que selecao?: ",
                                        "3. Qual o maior time da Brasil?: "};

    char options_opções [][100] = {"A. Uma", "B. Duas", "C. Sete", "D. Cinco",
                                   "A. Sim", "B. Não", "C. Eu sei lá", "D. Talvez",
                                   "A. São Paulo", "B. Botafire", "C. Curintian", "D. Inacreditável F.C."}; 

    char answer_respostas[] = {'D', 'A', 'D'};
    int numberofquestions_numerodeperguntas = sizeof(questions_perguntas)/sizeof(questions_perguntas[0]);

    char guess_palpite;
    int score_pontuacao;

    printf("Quiz Game - Jogo de Perguntas\n");

    for(int i =0; i < numberofquestions_numerodeperguntas; i++)
    {
        printf("***************************\n");
        printf("%s", questions_perguntas[i]);
        printf("***************************\n\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options_opções[j]);
        }
        
        printf("guess_palpite:");
        scanf("%c", &guess_palpite);
        //scanf("%c"); //limpa \n do buffer de entrada (input) (parece não dá certo aqui)
        //fflush(stdin); //limpa dados armazenados no buffer, mas não é recomendadeo
        while ((getchar()) != '\n'); //"recomenda-se" para limpar dados armazenados no buffer
        /*
        Usando “while ((getchar())! = '\ N'); ” : 
        Digitando“ while ((getchar())! = '\ N'); ” 
        lê os caracteres do buffer até o final e 
        os descarta (incluindo nova linha) e, 
        usando-o após a instrução “scanf()”, 
        limpa o buffer de entrada e permite a 
        entrada no contêiner desejado.
        */

        guess_palpite = toupper(guess_palpite);

        if (guess_palpite == answer_respostas[i])
        {
            printf("Correct!_Correto!\n");
            score_pontuacao++;
        }
        else
        {
            printf("Wrong!_Errado!\n");
        }
                        
    }
    printf("*****************************************\n");
    printf("Final score - Pontuacao Final: %d/%d\n", score_pontuacao, numberofquestions_numerodeperguntas);
    printf("*****************************************\n");

    system ("pause");
    return 0;
}