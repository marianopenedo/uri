#include <stdio.h>
int main ()
{
	int a;
	double x[10];
	for (a = 0; a < 10; a++)
	{
		scanf ("%lf", &x[a]);
	}
	for (a = 0; a < 10; a++){
		if (x[a] <= 10)
		{
			printf ("A[%d] = %.1lf\n", a, x[a]);
		}
	}
}