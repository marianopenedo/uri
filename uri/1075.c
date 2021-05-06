#include <stdio.h>
int main ()
{
    int a,b, aux = 0;
    scanf ("%d", &b);
    
    for (a = 1; a <= 10000; a++)
    {
        if (a % b == 2)
        {
         	aux = a;
          	printf ("%d\n", a);
        }
    }
    
}