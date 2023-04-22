#include <stdio.h>

int main()
{
    int vetor[5]={5, 3, 7, 11, 9};
    int loop, aux = 0;
    
    printf("Vetor Desordenado: ");
    for(loop=0;loop<5;loop++){
        printf("%d ", vetor[loop]);
    }
    // ordenação
    for(loop=0;loop<5;loop++){
        for(int j = loop+1; j<5; j++){
            if(vetor[loop]>vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[loop];
                vetor[loop] = aux;
            }
        }
    }
    printf("\nVetor Ordenado: ");
    for(loop=0;loop<5;loop++){
        printf("%d ", vetor[loop]);
    }
    
    return 0;
}