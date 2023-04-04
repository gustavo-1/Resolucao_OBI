#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char tipo;
    int X;
    int estados[100];
    int tempos[100];
    int T1[100];
    int GT =0;
    for (int i = 0; i < 100; i++)
    {
       estados[i]= -1;
       tempos[i]=0;
    }
    
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        scanf("%c %d",&tipo, &X);
        if(tipo != 'T')
            GT++;
        else{
            GT += X;
            continue;
        }

        if(tipo == 'R'){
            estados[X] = 1;
            T1[X]=GT;
        }
        if(tipo == 'E'){
            estados[X] = 0;
            tempos[X] = GT - T1[X];
        }
        printf("%c %d",tipo,X);

    }

    for (int i = 0; i < 100; i++)
    {
       if(estados[i]==1){
        printf("%d -1",i);
       }
       if(estados[i]==0){
        printf("%d %d",i,tempos[i]);
       }
    }
puts("b");

    return 0;
}
