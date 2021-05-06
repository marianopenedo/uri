#include <stdio.h>

int main ()
{
	int x,q=0,a,i;
	for (; ;)
	{	
		scanf ("%d", &x);
		if ( x == 0)
		{
			break;
		}
		else 
		{
		for ( i = 1; i <= x; i++)

			if (i == x)
			{
				printf ("%d\n",i);
				continue;
			}
			else if ( i != x)
			{
				printf ("%d ", i);
				q++;
			}
		}

	}
}