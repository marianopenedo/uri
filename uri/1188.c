#include <stdio.h>

int main ()
{
	char operacao;
	double m[12][12],c;
	int i,j,x,a,d=0;
	scanf ("%c", &operacao);
	
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			scanf("%lf", &m[i][j]);
		}
	}
		for (i = 11; i >= 7; i--)	//linha					
		{	
			for (j = 1+d; j <= 10-d; j++) //coluna  		
			{ 
				c+=m[i][j];
				printf("%.1lf\n", m[i][j]);
			}
			d++;	
		}
	if (operacao == 'S')
	{	
		printf ("%.1lf\n", c);
	}

	else if (operacao == 'M')
	{
		c /= 30;
		printf ("%.1lf\n", c);
	}
}