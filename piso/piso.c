#include <stdio.h>

int main(){
   int L,C;
   scanf("%d %d",&L,&C);

   int tipo1,tipo2;
   tipo2 = 2*(L-1)+2*(C-1);
   tipo1 = ((L*C)-0.5-tipo2*0.25)/0.5;
   printf("%d\n%d",tipo1,tipo2);
    return 0;
}

