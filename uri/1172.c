#include <stdio.h>

int main ()
{
	int x[10],a;

	for (a = 0; a < 10; a++)
	{
		scanf ("%d", &x[a]);
		if (x[a] <= 0)
		{
			x[a] = 1;
		}
	}
	for (a = 0; a < 10; a++)
	{
		printf ("X[%d] = %d\n", a, x[a]);
	}
}