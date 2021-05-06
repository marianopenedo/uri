#include <stdio.h>
int main ()
{
	char operacao;
	double m[12][12],c;
	int i,j,x,a,d;
	scanf ("%c", &operacao);
	
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			scanf ("%lf", &m[i][j]);
		}
	}
	
	if (operacao == 'S')
	{	
		for (i = 0; i < 11; i++)
		{	
			for (j = i+1; j < 12; j++)
			{ 
				c+=m[i][j];
			}	
		}
		printf ("%.1lf\n", c);
	}

	else if (operacao == 'M')
	{
		for (i = 0; i < 11; i++)
		{	
			for (j = i+1; j < 12; j++)
			{ 
				c+=m[i][j];
			}	
		}
		c = c/66;
		printf ("%.1lf\n", c);
	}

}