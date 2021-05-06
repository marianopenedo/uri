#include <stdio.h>

int main ()
{
    int idade,count=0;
    double id=0;
    
    while (scanf ("%d", &idade) == 1 && idade > 0)
    {
        if (idade < 0)
        {
            break;
        }
        count ++;
        id += idade;
    }
    printf ("%.2lf\n", id/count);
}