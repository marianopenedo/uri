#include <stdio.h>

int main ()
{
    int hora, vm;
    double dm, lit;
    scanf ("%d", &hora);
    scanf ("%d", &vm);
    dm = vm*hora;
    lit = dm/12;
    printf ("%.3lf\n", lit);
}