#include <stdio.h>

int main ()
{
   double A,B,C,MEDIA;
    scanf("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);
    A *= 2;
    B *=3;
    C *=5;
    MEDIA = (A+B+C) / 10;
    printf ("MEDIA = %.1lf\n", MEDIA);
}