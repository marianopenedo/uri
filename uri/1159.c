#include <stdio.h>

int main ()
{
    int x,soma=0,a,c=0;
    for (; ;)
    {
        scanf ("%d", &x);
        
        if (x % 2 != 0)
        {
            x+=1;
        }
        else if (x == 0)
        {
            return 0;
        }
        for (a = 0; a < 5; a++)
        {

            if (x % 2 == 0)
                {

                    soma+=x;
                    x+=2;
                }       
        }
    printf ("%d\n", soma);
    soma = 0;
    }
    
}