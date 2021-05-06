#include <stdio.h>
int main ()
{
	int x,a, b,c,d,soma=0;
	scanf ("%d", &a);

	for (x = 0; x < a; x++)
	{
		scanf ("%d", &b);

		for ( c = 1; c < b; c++)
		{
			
			if (b % c == 0)
			{
				soma+=c;
			}
		}
		if (soma == b)
		{
			printf ("%d eh perfeito\n", b);
		}
		else
		{
			printf ("%d nao eh perfeito\n", b);
		}
		soma = 0;
	}
}