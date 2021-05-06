#include <stdio.h>
int main ()
{
    int a,par=0, pos=0,impar=0, neg=0, i;
    
    for (a = 0; a < 5; a++)
    {
        scanf ("%d", &i);
        if (i % 2 == 0)
        {   
           par++;
        }
        else 
        {
            impar++;
        }
        if (i > 0)
        {
            pos++
        }
        else
        {
            neg++
        }
        
    }
    printf ("%d valor(es) par(es)\n", par);
    printf ("%d valor(es) impar(es)\n", impar);
    printf ("%d valor(es) positivo(s)\n", pos);
    printf ("%d valor(es) negativo(s)\n", neg);
}