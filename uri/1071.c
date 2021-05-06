#include <stdio.h>

int main ()
{
    int a,x,y,x1,x2, soma=0;
    scanf ("%d", &x);
    scanf ("%d", &y);
    
    if (y > x)
    {
        x1=y;
        x2=x;
    }
    else
    {
        x1=x;
        x2=y;
    }
    for (a = x2+1; a < x1; a++)
       {
            if (a % 2 != 0)
            {
                soma+=a;
            }
        }
        printf ("%d\n",soma);
}