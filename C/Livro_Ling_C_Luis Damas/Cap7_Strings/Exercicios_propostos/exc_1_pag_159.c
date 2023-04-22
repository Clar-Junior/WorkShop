#include <stdio.h>
#include <string.h>

//String Length 
int main(){
    int i;
    strlen("");
    i = strlen("casamento");
    printf("%d", i);
}

/* não deu certo, mas está igual ao livro.
int main(){
    int strlen(char *s);
    {
        int i = 0, s;
        while(s[i] != '\0'){
            i++;
            return i;
        }
    }
}
*/