#include <stdio.h>
int main ()
{
	int a,d,i,j,fimatriz,inimatriz;

	for (; ;)
	{
		
		scanf ("%d", &a);
		int matriz[a][a];

		if (a == 0)
			return 0;
		
		fimatriz = a;
		inimatriz = 0;
		d = 1;	

		for (; ;)
		{
			for (i = inimatriz; i < fimatriz; i++)
				for (j = inimatriz; j < fimatriz; j++)
				{
					matriz[i][j] = d;
					// printf ("%d ", matriz[i][j]);
				}

			if (fimatriz == 0)
				break;

			inimatriz++;
			fimatriz--;
			d++;
		}
	

		for (i = 0; i < a; i++)
		{	
			for (j = 0; j < a; j++)
			{
				if (j == 0)
				printf ("%3d", matriz[i][j]);
				else
				printf (" %3d", matriz[i][j]);
			}
			printf ("\n");
		}
		printf("\n");

	}
}
