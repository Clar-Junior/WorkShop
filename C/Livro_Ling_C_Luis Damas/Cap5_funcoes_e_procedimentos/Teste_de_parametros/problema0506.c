#include <stdio.h>

char por_na_tela(int num, char ch){
    int i;

    for(i=1; i<=num; i++){
        putchar(ch);
    }
    putchar('\n');
}

int main(){
    por_na_tela(5, 'Y');
    por_na_tela(15, 'H');


}