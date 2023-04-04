#include <stdio.h>
int main(){

    int N;
    int tempLido;
    int pos=0;
    int pilha[100];
    int soma = 0;
    for (int i = 0; i < 100; i++)
    {
        pilha[i]= 0;
    }
    
    scanf("%d",&N);
    for(int i = 0;i < N; i++){
        scanf("%d",&tempLido);
        if (tempLido == 0)
        {
            pos --;
        }else{
            pilha[pos] = tempLido;
            pos++;
        }
        
        
    }

    for (int i = 0; i < pos; i++)
    {
        soma+= pilha[i];
    }
    printf("%d",soma);


    return 0;
}