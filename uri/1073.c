#include <stdio.h>

int main ()
{
    int x,a,y,aux=0;
    scanf ("%d", &x);
    
    for (a = 1; a <= x; a++)
    {
        if (a % 2 == 0)
        {
            printf ("%d^2 = %d\n", a, a*a);
        }
    }
}