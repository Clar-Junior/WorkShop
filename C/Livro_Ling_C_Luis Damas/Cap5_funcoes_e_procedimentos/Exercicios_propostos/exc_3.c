#include <stdio.h>
/*
Não consegui entender nem responder.
*/
void ping(int);
void pong(int);

int main(){


}






void ping(int i){
    switch (i)
    {
    case 1:
    case 2:
    case 3:
        while(i--)
            printf("\n%d", i--);
        break;
    case 25:
        pong(3);
        break;
    default:
        printf("\nJa passei em C");
        pong(123);
    }
}

void pong(int x){
    int j=0;
    switch (x)
    {
    case 1:
    case 2:
        ping(x);
    case 3:
        j=5;
        j++;
        return;
    default: 
        prinft("\nOla");
        return;
    }
printf("\nVou sair");
}

