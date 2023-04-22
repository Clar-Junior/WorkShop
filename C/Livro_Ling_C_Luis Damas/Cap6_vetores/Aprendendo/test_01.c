#include <stdio.h>

int main(){
    int v[3] = {500, 750, 1000};
    char m[3] = {'J','F', 'M'};
    int i,j;

    for(i=0; i<3; i++)
    {
        printf("%c = ",m[i]);
            for(j=0; j<3; j++)
            {
                printf("%d\n", v[i]);
                break;
            }
    }

}
