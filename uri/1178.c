#include <stdio.h>
int main ()
{
	int x;
	double a,n[100];

	scanf ("%lf", &a);
	n[0] = a;
	for (x = 0; x < 99;x++)
	{
		n[x+1] = n[x]/2;
	}
	for (x = 0; x < 100; x++)
	{
		printf ("%.4lf\n", n[x]);
	}
}