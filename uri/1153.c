#include <stdio.h>

int main ()
{
	int a,i,fat=0,c=0,cont=1,b=1;
	scanf ("%d", &a);
	while (a < 0 && a < 13)
	{
		scanf ("%d", &a);
	}

	for (i = a; i >= 2; i--)
	{
		cont *= i;
	}
	 printf ("%d\n", cont);
}