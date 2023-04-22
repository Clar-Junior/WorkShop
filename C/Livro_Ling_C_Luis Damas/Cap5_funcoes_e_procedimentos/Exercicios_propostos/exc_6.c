#include <stdio.h>
#include <stdlib.h>

long int n_segundos(int n_horas){
    long int horas, segundos, convert_p_seg;
    horas=(n_horas);
    segundos=3600;
    convert_p_seg = horas*segundos;
    return convert_p_seg;

}

int main(){
    int horas, segundos;

    printf("Digite em horas e converta para segundos: ");
    scanf("%d", &horas);
    segundos=n_segundos(horas);
    printf("%d hora(s) vale(m) %d segundos.\n", horas, segundos);

system("pause");
}
