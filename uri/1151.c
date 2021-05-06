#include <stdio.h>

int main ()
{
    int a, b,c=0,soma = 1,aux=0;
    scanf ("%d" , &a);
    while (a<= 0 && a <= 46)
    {
        scanf ("%d", &a);
    }
    for (b = 1; b < a; b++)
    {   
        if ( b % 2 == 1)
        {
            printf ("%d ", c);
            c = aux+soma;
            aux = c;
        }
        else if (b==2)
        {
            printf ("%d ", c);
        }
        else if (b % 2 == 0)
        {
            printf ("%d ", c);
            c = aux+soma;
            soma = c;
        }
    }
    printf ("%d\n",c);
    return 0;
}