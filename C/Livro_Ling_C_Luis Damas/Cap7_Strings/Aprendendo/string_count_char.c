/*String count char*/
#include<stdio.h>
#include<string.h>
int strcountc(char *s, char ch){
    int i, conta;
    for(i=conta=0; s[i]!='\0'; i++)
        {
        if (s[i]==ch){              /*se for o caracter que procuramos*/
            conta++;                /*incrementar o contador*/
        }
        }
    return conta;
}

int main(){
    int conta;
    conta = strcountc("abacate",'t');   /*variável 'conta' recebe resultado da função strcountc*/
    printf("%d", conta);                /*teste com 'puts' não funcionou, mas com printf funciona normalmente*/

}