#include <stdio.h>
int main ()
{
	int x,z,pa,pb,count=0;
	double g1,g2;
	scanf ("%d", &x);

	for (z = 1; z <= x; z++)
	{
		scanf ("%d %d %lf %lf", &pa, &pb, &g1, &g2);

	while (pa <= pb && count < 101)
	{
		pa+= (int)((pa*g1)/100);
		pb+= (int)((pb*g2)/100);
		count++;
	}
	if (count > 100)
		{
			printf ("Mais de 1 seculo.\n");
		}
	else 
	{
		printf ("%d anos.\n", count);
	}
	count = 0;
  }
} 