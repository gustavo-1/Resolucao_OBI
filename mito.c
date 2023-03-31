#include <stdio.h>
#define MAX 600
int main(){
    int N;
    int M[MAX][MAX];
    int tempi,tempj;
    int count = 0;
    int flag = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX;j++)
    {
        M[i][j]=0;
    }
    }
    
    fflush(stdin);
    scanf("%d",&N);
    //printf("%d",N );
    for(int i=0;i<N;i++){
        //fflush(stdin);
        scanf("%d %d",&tempi,&tempj);
        M[tempi][tempj]++;
    }

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX;j++)
    {
        if( M[i][j]>1){
            //count++;
            flag = 1;
           // break;
        }
    }
    }
    printf("%d\n",flag);
}