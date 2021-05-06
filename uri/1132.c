#include <stdio.h>

int main ()
{
	int x,y,aux=0,a,soma=0;
	scanf ("%d %d", &x, &y);
	if (y > x)
	{
		aux = y;
		y = x;
		x = aux;
	}
	for (a = x; a >= y; a--)
	{
		if (a % 13 != 0)
		{
			soma+=a;
		}
	}
	printf ("%d\n", soma);
}