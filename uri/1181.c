#include <stdio.h>
int main ()
{
	char operacao;
	double m[12][12],c;
	int i,j,x,a,d;
	scanf ("%d %c", &a, &operacao);
	
	for (i = 0; i < 12; i++)
	{

		for (j = 0; j < 12; j++)
		{
			scanf ("%lf", &m[i][j]);
		}
	}
	
	if (operacao == 'S')
	{
		for (j = 0; j < 12; j++)
		{ 
			c+=m[a][j];
		}
	printf ("%.1lf\n", c);
	}
	else if (operacao == 'M')
	{
		for (j = 0; j < 12; j++)
		{	
			c+=m[a][j];
		}
		c = c/12;
		printf ("%.1lf\n", c);
	}

}