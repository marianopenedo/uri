#include <stdio.h>
int main ()
{
	int i,a;
	scanf ("%d", &i);
	for (a = 1; a <= i;a++)
	{
		printf ("%d %d %d\n", a, a*a,a*a*a);
		printf ("%d %d %d\n", a, a*a+1,a*a*a+1);
	}
}