//parte do livro que fala sobre 'strings'
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome1[20] = "Andre";
    char nome2[30] = {'A', 'n', 'd', 'r', 'e'};
    char nome3[] = "Andre"; //equivalente a char nome[5+1] = "Andre";
    char *nome = "Andre";   //idem acima
    /*
    Notar que, em qualquer dos casos, sempre que se faz a carga incial automática
    da string o compilador coloca automaticamente o delimitador '\0'.
    
   
   puts(nome);
   puts(nome1);
   puts(nome2);
   puts(nome3);
   printf(nome1);
   
  char lastname[20] = "Junior";
  char firstname[100] = "Clarival Araujo dos Santos ";
  printf("Nome: %s, %s", lastname, firstname);
  */
  
  /*
  FUNÇÃO PUTS
    A função puts coloca na tela a string passada à função e, em seguida, faza 
    automaticamente um mudança de linha.
  
    char recebenome[100];
    puts("Escreva seu nome:"); //melhor o printf pois o nome é escrito na mesma linha.
    scanf("%s", recebenome);  //a função scanf realiza apenas a leitura de 1 única palavra.
    puts(recebenome);
    */


   






}