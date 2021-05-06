#include <stdio.h>

int main ()
{
    int a;
    for (a = 2; a <= 100; a++)
    {
        if (a % 2 == 0)
        {
            printf ("%d\n", a);
        }
    }
}