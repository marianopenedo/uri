#include <stdio.h>
int main ()
{
	double matriz[12][12], c;
	int i,j,a,b,d=0;
	char op;
	scanf ("%c", &op);

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			scanf ("%lf", &matriz[i][j]);
		}
	}

	for (i = 1; i < 11; i++) //linha
	{
		for (j = 11; j > 6; j--) //coluna
		{
			if (j - i > 0 && j+i >= 12)
			{
				// printf ("%.2lf ", matriz[i][j]);
				c+=matriz[i][j];
			}			
		}
		// printf ("\n");
	}
	if (op == 'S')
	{	
		printf ("%.1lf\n", c);
	}

	else if (op == 'M')
	{
		c /= 30;
		printf ("%.1lf\n", c);
	}



}