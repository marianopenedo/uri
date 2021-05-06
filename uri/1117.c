#include <stdio.h>

int main ()
{
    int x;
    double a,b,media;
    for (; ;)
    {
        while(scanf ("%lf", &a) == 1 && a < 0 || a > 10)
        {
            printf ("nota invalida\n");
        }

        while(scanf ("%lf", &b) == 1 && b < 0 || b > 10)
        {
            printf ("nota invalida\n");
        }
        media = (a+b)/2;

        printf ("media = %.2lf\n", media);    
        printf("novo calculo (1-sim 2-nao)\n");
        scanf ("%d", &x);

        while( x!= 1 && x != 2)
        {
            printf ("novo calculo (1-sim 2-nao)\n");
            scanf ("%d", &x);
        }

        if (x == 1)
            continue;

        else 
            break;
    }
}