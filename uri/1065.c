#include <stdio.h>
int main ()
{
    int a,count=0,i;
    
    
    for (a = 0; a < 5; a++)
    {
        scanf ("%d", &i);
        if (i % 2 == 0)
        {   
           count++;
        }
    }
    printf ("%d valores pares\n", count);
}