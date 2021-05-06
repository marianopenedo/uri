#include <stdio.h>

int main ()
{ 
    double raio, area = 0, n = 3.14159;
    printf ("");
    scanf ("%lf", &raio);
    area = raio*raio*n;
    printf ("A=%.4f\n", area);
    return 0;
}