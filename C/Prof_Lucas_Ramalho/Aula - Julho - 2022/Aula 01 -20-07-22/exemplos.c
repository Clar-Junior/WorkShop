/*
include <stdio.h>

int main()
{
    int salario[12];
    int aux, soma = 0, temp = 0;

    for(aux=0;aux<12;aux++){
        printf("Digite o salario %d:", aux);
        scanf("%d", &salario[aux]);
        
        soma = soma + salario[aux];
    }
    printf ("A soma dos salarios: %d\n", soma);
    
    //varredura ou busca
    for(aux=0;aux<12;aux++){
        if(temp < salario[aux]){
            temp = salario[aux];
        }
    }
    printf ("O maior dos salarios: %d", temp);
}
*/
/*
#include <stdio.h>

int main()
{
    int salario[12];
    int aux, soma = 0, temp = 0;

    for(aux=0;aux<12;aux++){
        printf("Digite o salario %d:", aux);
        scanf("%d", &salario[aux]);
        
        soma = soma + salario[aux];
        if(temp < salario[aux]){
            temp = salario[aux];
        }
    }
    printf ("A soma dos salarios: %d\n", soma);
    printf ("O maior dos salarios: %d", temp);
}
*/

/*
MANIPULAÇÃO DE TEXTO

#include <stdio.h> //printf scanf
#include <string.h> //strlen


int main()
{
    char letra = 'b';
    char enter = '\n';
    char palavra[]="Lucas Arruda Ramalho!!!";// 5+1+6+1+7+3 = 23
    // %c - char - caracter ou letra
    // %s - string - palavra
    printf("Letra: %c%c", letra, enter);
    printf("Palavra: %s \n", palavra);
    printf("Tamanho Palavra %d", strlen(palavra));
}
*/

/*
    #include <stdio.h> //printf scanf
#include <string.h> //strlen


int main()
{
    char nome[10]="Lucas";
    char lista_nomes[5][10]={"Adao", "Gelcivina", "Sadylla", "Clarival", "Lucas"};
    
    printf("%s - %d\n", lista_nomes[0], strlen(lista_nomes[0]));
    printf("%s - %d\n", lista_nomes[1], strlen(lista_nomes[1]));
    printf("%s - %d\n", lista_nomes[2], strlen(lista_nomes[2]));
    printf("%s - %d\n", lista_nomes[3], strlen(lista_nomes[3]));
    printf("%s - %d\n", lista_nomes[4], strlen(lista_nomes[4]));
}

*/

/*
#include <stdio.h> //printf scanf
#include <string.h> //strlen


int main()
{
    char maior_sal[10];
    char lista_nomes[5][10]={"Adao", "Gelcivina", "Sadylla", "Clarival", "Lucas"};
    float temp = 0, salarios[5] = {4500, 5000, 5500, 2500, 1000};
    
    printf("Tabela de Salarios\n");
    printf("Nome\t\tSalario R$\n");
    for(int aux=0; aux<5; aux++){
        printf("%10s\t%.2f\n", lista_nomes[aux], salarios[aux]);
        if(temp < salarios[aux]){
            temp = salarios[aux];
            //maior_sal = lista_nomes[aux];
            strcpy(maior_sal, lista_nomes[aux]);
        }
    }
    printf("Maior Salario %s\t%.2f\n", maior_sal, temp);

}
*/