#include <stdio.h>
#include <string.h>

/*MEU CODIGO 
    *COM PESQUISA

char *troca(char *dest, char *orig, int n){
    *strncpy(dest, orig, n);
    return dest;
}
int main(){
    char texto[10] = "Pedro";
    char dest[10] = "Junio";
    size_t n = 5;
    troca(dest, texto, n);
    printf("%s", dest);
}
*/
//CÓDIGO DO LIVRO > não deu certo
char troca(char *dest, char *orig, int n){
int i;
    for(i=0; i<n; i++){
        dest[i] =orig[i];
    }
    return *dest;
}
int main(){
    char fonte[30] = "Jovecy Aquino";
    char destino[30] = "Alvino";
    size_t num = 20;

    troca(destino, fonte, num);
    printf("%s", destino);
}
