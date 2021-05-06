#include <stdio.h>

int main ()
{
    int h1,hf,media;
    scanf ("%d %d", &h1, &hf);
    
    if (h1 == hf)
    {
        printf ("O JOGO DUROU 24 HORA(S)\n");
    }
    
    else if (h1 > hf)
    {
        h1 = 24-h1 + hf;
        printf ("O JOGO DUROU %d HORA(S)\n", h1);
    }
    else if (h1 < hf)
    {
        hf -= h1;
        printf ("O JOGO DUROU %d HORA(S)\n", hf);
    }
}