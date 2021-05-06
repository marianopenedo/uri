#include <stdio.h>

int main ()
{
	int a,n1,n2,t,aux=0,j,imp=0;
	scanf ("%d", &t);
	for (a = 0; a < t; a++)
	{
		scanf ("%d %d", &n1, &n2);

		if (n1 < n2)
		{
			aux = n1;
			n1 = n2;
			n2 = aux;
		}
			for (j = n1-1; j > n2; j--)
			{
				
			if (j % 2 != 0)
				{
					imp +=j;
				}	
			}
		printf ("%d\n", imp);
		imp = 0;
	}
}