#include <stdio.h>

int main ()
{
	int a,b,q,r;
	scanf ("%d %d", &a, &b);
	r = a%b;
	if (((a-r)%b) == 0)
	{
		q = ((a - r)/b);
	}
	printf ("%d %d\n", q,r);
}