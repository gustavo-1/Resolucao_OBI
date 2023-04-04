#include <stdio.h>
#include <math.h>
#define MAX 600
int main()
{
    long double N;
    long double M;
    long double x = 0;
    long double y = 0;
    int flag = 0;
    char entradaC;
    long double entradadist;
    scanf("%d %d ", &N, &M);

    for (int i = 0; i < N ; i++)
    {
        scanf("%c %Lf ", &entradaC, &entradadist);

        switch (entradaC)
        {
        case 'N':
            y = y + entradadist;
            break;
        case 'S':
            y = y - entradadist;
            break;
        case 'L':
            x = x + entradadist;
            break;
        case 'O':
            x = x - entradadist;
            break;

        default:
            break;
        }

        if (x * x + y * y > M*M)
        {
            flag = 1;
        }
    }
    printf("%d\n", flag);
}