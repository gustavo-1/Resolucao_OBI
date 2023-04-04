#include <stdio.h>
int main(){

    int vitorias = 0;
    char tempLido;
    for(int i = 0;i < 6; i++){
        scanf("%c ",&tempLido);
        if(tempLido == 'V'){
            vitorias++;
        }
    }

    if(vitorias>=5){
        puts("1");
    }
    else if(vitorias>=3){
        puts("2");
    }
    else if(vitorias>=1){
        puts("3");
    }
    else{
        puts("-1");
    }


    return 0;
}