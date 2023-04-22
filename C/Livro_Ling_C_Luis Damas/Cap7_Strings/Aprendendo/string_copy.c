#include <stdio.h>
#include <string.h>

char *copia(char *dest, char *orig){
    int i;
    for(i=0; orig[i]!='\0'; i++){
        dest[i] = orig[i];
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char ela[10] = {"gabby"};
    char ele[10] = {"paulo"};
    
    copia(ele, ela);
    printf("%s", ela);

}