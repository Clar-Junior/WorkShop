/*
    Implementa a função
        float max(float v[], int n)
    que recebe um vetor de números reais e o número de elementos a considerar.
    Retorna o maior número entre os n primeiros ementos do vetor.
*/
#include <stdio.h>

/* Meu código

float max(float v[], int n){
    int i;
    float j;
    for(i=0; i<5; i++){
        printf("%.2f\n", v[i]);
    }
    for(i=0; i<5; i++){
        if(v[i]<v[i]){
            j= v[i];
        }
    }
    printf("Maior numero: %.2f\n", j);
}
int main(){
    float v[5] = {10, 20, 30, 40, 50};
    int n = 2;

    max(v, n);
}
*/

// código do livro
// float max(float v[], int n); (essa declaração da função é dispensável)
float max(float v[], int n){
    int i;
    float maior = v[0];         // maior recebe 10.0
    for (i = 1; i < n; i++){    // i==1 pq v[0] está em maior.logo, usou-se v[1] e v[2] aqui.
        if (v[i] > maior){      // se v[1] ou v[2] for maior que v[0]'maior'.
            maior = v[i];       //'maior' recebe o maior número de v[0], v[1] e v[2].
        }
    }
    return maior;
}
int main(){
    float x[] = {10.0, 20.0, 15.0, 50.0, 27.0};

    printf("O maior dos 3 primeiros elementos = %f\n", max(x, 3));
    printf("O maior dos 5 primeiros elementos = %f\n", max(x, 5));
}
