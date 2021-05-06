#include <stdio.h>

int main ()
{
    int a,x,z,soma=0,cont=0,aux=0;
    scanf ("%d", &x);
    scanf ("%d", &z);
    while (z <= x)
    {
        scanf ("%d", &z);
    }
    while (cont <= z)
    {
        cont += x+aux;
        soma++;
        aux++;
    }
    printf ("%d\n", soma);
    
}