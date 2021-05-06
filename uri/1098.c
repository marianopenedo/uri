#include <stdio.h>

int main()
{
    double a, i , j = 0;
    
    for (a = 0; a <= 2.0; a += 0.2)
    {
        for (i = 0; i <= 4; i ++)
        {
            j ++;
            if (i == 3)
            {
                j += 0.2;
                j -= 4;
                break;
            }
        printf ("I=%g J=%g\n", a, j);
        }
    }
    return 0;
}