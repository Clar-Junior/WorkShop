#include <stdio.h>
#include <string.h>


int comparar(char *s1, char *s2, int n){
    int i;
    for(i=0; i<n; i++){
        if(s1[i] == s2[i]){
            printf("%c = %c\n", s1[i], s2[i]);
        }
        else
            printf("%c != %c\n", s1[i], s2[i]);
    }
}
int main(){
    char nome[] = "Maria Saudade";
    char nome1[] = "Mario Saudade";
    int n=13;
    comparar(nome, nome1, n);
}

