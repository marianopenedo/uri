#include <stdio.h>

int main ()
{
    int a,a1=1, x,x1=0,x2=0;
    for (a = 1; a <= 100; a++)
    {
        scanf ("%d", &x);
       if (x > x2)
       {
          x2 = x;
          a1=a;
       }
    }
    printf ("%d\n", x2);
    printf ("%d\n", a1);
}