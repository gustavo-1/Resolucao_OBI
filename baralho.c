#include <stdio.h>
#include <string.h>

int main(){

    char input[157];
    int naipes[4];
    int naipe;
    int erro[4];
    for (int j = 0; j < 4; j++){
        erro[j]=0;
         naipes[j]= 0;
    }
    int naipesDigitados[4][13];
    char Entradanaipe;
    int entradaNumero;

    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++){
            naipesDigitados[i][j] = 0;
        }
    }
    
    scanf("%s", input);
    int tam = strlen(input);
    int i=0;
  int cont = 0;
    while (i<(tam/3))
    {
        i++;
        sscanf(&input[cont],"%d%c", &entradaNumero, &Entradanaipe);
        cont+=3;
        entradaNumero = entradaNumero-1;//para encaixar numeros do vetor com os das cartas 
          
        

        if(Entradanaipe == 'C'||Entradanaipe == 'c') {naipe = 0;}
        else if(Entradanaipe == 'E'||Entradanaipe == 'e') {naipe = 1;}
        else if(Entradanaipe == 'U'||Entradanaipe == 'u') {naipe = 2;}
        else if(Entradanaipe == 'P'||Entradanaipe == 'p') {naipe = 3;}
        else puts("nc ");

        if(naipesDigitados[naipe][entradaNumero]!=0){
            erro[naipe]=1;
            
        }else{
            naipesDigitados[naipe][entradaNumero] ++;
            naipes[naipe]++;
        }


    }
    for (int j = 0; j < 4; j++){
        if(erro[j])
         printf("erro\n");
        else
        printf("%d\n",13-naipes[j]);
    }
    
    return 0;
}