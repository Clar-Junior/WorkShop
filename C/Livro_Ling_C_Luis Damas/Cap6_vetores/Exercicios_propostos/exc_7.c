#include <stdio.h>
#include <ctype.h>
#include <string.h>


int comparar(char *s1, char *s2, int n){
    int i;
    for(i=0; i<n; i++){
       if(toupper(s1[i]) != toupper(s2[i]));
            return 0;
    }
    return 1;
}
int main(){
    char nome[] = "MaRia";
    char nome1[] = "Mari5";
    int n=5;
    comparar(nome, nome1, n);
}

