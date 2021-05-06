#include <stdio.h>

int main ()
{
    int a,x,y,q=0;
    scanf ("%d %d", &x, &y);
    
    for (a = 1; a <= y ; a++)
    {
    	q++;
        if (q == x)
        {
            printf ("%d\n",a);
            q=0;
        }
        else 
        {
            printf ("%d ", a);
        }
    }
}