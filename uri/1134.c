#include <stdio.h>

int main ()
{
	int c,alc=0,gasosa=0,dies=0;
	for (; ;)
	{
		scanf ("%d", &c);
		if (c == 1)
		{
			alc++;
			continue;
		}
		else if (c == 2)
		{
			gasosa++;
			continue;
		}
		else if (c == 3)
		{
			dies++;
			continue;
		}
		else if (c == 4)
		{
			break;	
		}
		else 
		{
			continue;
		}
	}
		printf ("MUITO OBRIGADO\n");
		printf ("Alcool: %d\n", alc);
		printf ("Gasolina: %d\n", gasosa);
		printf ("Diesel: %d\n", dies);
		return 0;
}