#include <stdio.h>
#include <stdlib.h>

float maior(float x, float y, float z){
    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }

}
int main(){
    float x, y, z, res;
    
    printf("Digite o numero 1 de 3: ");
    scanf("%f", &x);
    printf("Digite o numero 2 de 3: ");
    scanf("%f", &y);
    printf("Digite o numero 3 de cl3: ");
    scanf("%f", &z);

    res = maior(x, y, z);
    printf("%f e o maior!\n", res);

    system("pause");
}