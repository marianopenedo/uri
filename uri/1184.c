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
		for (i = 1; i < 12; i++)	//linha
		{	
			for (j = 0; j <= i-1; j++) //coluna 
			{ 
				c+=m[i][j];
			}	
		}
	if (operacao == 's')
	{	
		printf ("%.1lf\n", c);
	}

	else if (operacao == 'm')
	{
		c /= 66;
		printf ("%.1lf\n", c);
	}

}