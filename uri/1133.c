#include <stdio.h>

int main ()
{
	int x, y,aux=0,a;
	scanf ("%d", &x);
	scanf ("%d", &y);
	if (y > x)
	{
		aux = y;
		y = x;
		x = aux;
	}
	for (a = y+1; a < x; a++)
	{
		if (a % 5 == 2 || a % 5 == 3)
		{
			printf ("%d\n", a);
		}
	}
}