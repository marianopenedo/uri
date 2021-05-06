#include <stdio.h>

int main ()
{
    int a,b,c,d,aux,j,i=0,soma=0;
    
    for (; ;)
    {
        scanf ("%d %d" , &a, &b);
        if (a <= 0 || b <= 0)
        {
            break;
        }
        else 
        {
            if (b > a)
            {
                aux = b;
                b = a;
                a = aux;
            }
                j=b;
            for (d = a-b; d >= 0; d--)
            {
                j--;
                printf ("%d ",  a-d);
                soma +=a-d;
            }
             printf ("Sum=%d\n", soma);
             soma = 0;
        }
    }
}