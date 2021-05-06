#include <stdio.h>
int main ()
{
	int x,c,b,a,d,soma=0;
	scanf  ("%d", &x);

	for (c = 0; c < x; c++)
	{
		scanf ("%d", &a);

		for (d = 1; d <= a; d++)
		{
			if (a % d == 0)
			{
				soma+=d;
			}
		}
		if (soma == a+1)
		{
			printf ("%d eh primo\n", a);
		}
		else
		{
			printf ("%d nao eh primo\n", a);
		}
		soma = 0;
	}
	
}