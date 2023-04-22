#include <stdio.h>

int main(){
    float sal[12]; //12 meses
    float total; //soma de todos os meses
    int i; //variável de controle

    for(i=0; i<12; i++){
        printf("Digite o salario do mes %d: ", i+1);
        scanf("%f", &sal[i]);
        
    }

    //1.mostrar os valores mensais.
    //2.calcular o total.
    
    puts("\n\t\t    Mes\t   Valor");
    for(i=0, total=0.0; i<12; i++){
        printf("\t\t      %3d  %9.2f\n", i+1, sal[i]);
        total += sal[i];
    }
    printf("\nTotal Anual: %9.2f", total);


}