#include <stdio.h>

int main ()
{
	double A, B,MEDIA;
	scanf ("%lf", &A);
	scanf ("%lf", &B);
	A *=3.5;
	B *=7.5;
	MEDIA = (A+B)/11;
	printf ("MEDIA = %.5lf\n", MEDIA);
}