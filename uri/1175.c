#include <stdio.h>

int main ()
{
    int x[20],a,b,c,d;
    
    for (a = 19; a >= 0; a--)
    {
        scanf ("%d", &x[a]);
    }
     for (a = 0; a < 20; a++)
        {
            printf ("N[%d] = %d\n", a, x[a]);
        }
}