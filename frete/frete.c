#include <stdio.h>

#define NMAX 101

int main(){
    int i, j, n, m, a, b, c, cur;

    int g[NMAX][NMAX];
    int sdist[NMAX];
    int final[NMAX];

    for(i=1; i<NMAX; i++){
        sdist[i]=-1;
        final[i]=0;

        for(j=1; j<NMAX; j++)
           g[i][j]=-1;
    }

    scanf("%d%d", &n, &m);

    //le e salva o grafo numa matriz de adjacencia

    for(i=0; i<m; i++){
        scanf("%d%d%d", &a, &b, &c);
        g[a][b]=c;
        g[b][a]=c;
    }

    sdist[1] = 0; //a distancia entre a cidade e ela mesma é zero
    while(!final[n]){ //enquanto a distancia até a enésima cidade não é final, atualize as distancias
        for(i=1;i<n+1; i++)//encontra a primeira distancia não final
            if(!final[i] && sdist[i]>=0){
                cur=i;
                break;
            }
                

        for(; i<n+1; i++){ //continua a execução para encontrar a menor destas distancias
            if(!final[i] && sdist[i]>0 && sdist[i]< sdist[cur]){
                cur=i;
                break;
            }
        }
        final[cur]=1;

        for(i=1; i<n+1; i++){ //atualiza as distancias
            if(g[cur][i]>0){
                if(sdist[cur]+g[cur][i]<sdist[i] || sdist[i]<0)
                    sdist[i]= sdist[cur]+g[cur][i];
            }
        }

    }
    
    printf("%d", sdist[n]);
}