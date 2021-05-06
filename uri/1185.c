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
			scanf("%lf", &m[i][j]);
		}
	}
		for (i = 0; i < 11; i++)	//linha
		{	
			for (j = 0; j < 11-i; j++) //coluna 
			{ 
				c+=m[i][j];
			}	
		}
	if (operacao == 'S')
	{	
		printf ("%.1lf\n", c);
	}

	else if (operacao == 'M')
	{
		c /= 66;
		printf ("%.1lf\n", c);
	}
}