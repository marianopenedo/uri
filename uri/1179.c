#include <stdio.h>

int main ()
{
	int a,c,d,impar[5],par[5],aux=0,count=0,x;

	for (a = 0; a < 15; a++)
	{
		scanf ("%d", &c);
		if (c % 2 == 0)
		{
			par[count] = c;
			count++;
			if (count == 5)
			{
				count = 0;
				for (x = 0; x <= 4; x++)
				{
					printf ("par[%d] = %d\n", x, par[x]);
				}
			}
		}
		else if (c % 2 != 0)
		{
			impar[aux] = c;
			aux++;
			if (aux == 5)
			{
				aux = 0;
				for (x = 0; x <= 4; x++)
				{
					printf ("impar[%d] = %d\n", x, impar[x]);
				}
			}
		}	
	}
	
	for (x = 0; x < aux; x++)
	{
		printf ("impar[%d] = %d\n", x, impar[x]);
	}
	for (x = 0; x < count; x++)
	{
		printf ("par[%d] = %d\n", x, par[x]);
	}
}

