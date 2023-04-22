#include <stdio.h>

char printar(char c, int num){
    printf("%c vale %d", c, num);
    putchar('\n');
}

int main(){
    printar('A', 133);

}