#include <stdio.h>

int main ()
{
    int a,c;
    scanf ("%d", &c);
    
    for (a = 1; a <= c; a++)
    {
        if (a % 2 != 0)
            {
                printf ("%d\n",a);
            }
    }
}