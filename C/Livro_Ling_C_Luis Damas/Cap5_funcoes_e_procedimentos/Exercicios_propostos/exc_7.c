#include <stdio.h>
#include <stdlib.h>

long int n_segundos(int n_horas, char tipo){

    if(tipo == 's'){
        long int tipo, segundos, convert_p_seg;
        tipo=(n_horas);
        segundos=1;
        convert_p_seg = tipo*segundos;
        return convert_p_seg;
    }
    else if(tipo == 'm'){
        long int minutos, segundos, convert_p_seg;
        minutos=(n_horas);
        segundos=60;
        convert_p_seg = minutos*segundos;
        return convert_p_seg;
    }
    else(tipo == 'h');
        long int horas, segundos, convert_p_seg;
        horas=(n_horas);
        segundos=3600;
        convert_p_seg = horas*segundos;
        return convert_p_seg;  
}

int main()
{
    int tipo, segundos;
    char unidade;

    printf("Digite o tempo e a unidade:\nh= horas\tm= minutos\ts= segundos\n");
    scanf("%d %c", &tipo, &unidade);
    segundos=n_segundos(tipo, unidade);

        if(unidade == 'h'){
            printf("%d hora(s) vale(m) %d segundos.\n", tipo, segundos);
        }
        else if(unidade == 'm'){
            printf("%d minuto(s) vale(m) %d segundos.\n", tipo, segundos);
        }
        else if(unidade == 's'){
            printf("%d segundo(s) vale(m) %d segundos.\n", tipo, segundos);
        }    
        else
        {
            printf("entrada invalida.\n");
        }          
    system("pause");
}