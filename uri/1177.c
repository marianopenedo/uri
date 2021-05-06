#include <stdio.h>

int main ()
{
    int n[1000],x,a,b=0;
    scanf ("%d", &a);
    
    for (x = 0; x < 1000; x++)
    {
        n[x] = b;
        b++;

        if (b == a)
        {
            b = 0;
        }
    }
    for (x=0; x < 1000; x++)
    {
        printf ("N[%d] = %d\n", x, n[x]);
    }
   
}