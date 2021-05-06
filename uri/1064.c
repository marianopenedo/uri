#include <stdio.h>
int main ()
{
    int a,count=0;
    double i,soma=0;
    
    for (a = 0; a < 6; a++)
    {
        scanf ("%lf", &i);
        if (i > 0)
        {   
           count++;
           soma += i;
        }
    }
    printf ("%d valores positivos\n", count);
    printf ("%.1lf\n", soma/count);
}