#include <stdio.h>

int main ()
{
    int tempo;
    scanf ("%d", &tempo);
    printf ("%d:%d:%d\n", tempo/3600, (tempo%3600)/60,(tempo%3600)%60);
}