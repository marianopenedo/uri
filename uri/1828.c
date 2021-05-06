#include <stdio.h>
#include <string.h>

int main ()
{
	int count, x, i;
	char y[10], z[10];

	scanf ("%d", &x);

	for (i = 1; i <= x; i++)
	{
		scanf ("%s %s", y, z);

		if (0 == strcmp (y,z))
		{
			printf ("Caso #%d: De novo!\n", i);
		}
		else if (0 == strcmp (y, "Spock"))
		{
			if (0 == strcmp (z, "tesoura") || 0 == strcmp(z, "pedra"))
			{
				printf ("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				printf ("Caso #%d: Raj trapaceou!\n", i);
			}
		}
		else if (0 == strcmp (y, "tesoura"))
		{
			if (0 == strcmp (z, "papel") || 0 == strcmp(z, "lagarto"))
			{
				printf ("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				printf ("Caso #%d: Raj trapaceou!\n", i);
			}
		}
		else if (0 == strcmp (y, "papel"))
		{
			if (0 == strcmp (z, "Spock") || 0 == strcmp(z, "pedra"))
			{
				printf ("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				printf ("Caso #%d: Raj trapaceou!\n", i);
			}
		}
		else if (0 == strcmp (y, "lagarto"))
		{
			if (0 == strcmp (z, "Spock") || 0 == strcmp(z, "papel"))
			{
				printf ("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				printf ("Caso #%d: Raj trapaceou!\n", i);
			}
		}
		else if (0 == strcmp (y, "pedra"))
		{
			if (0 == strcmp (z, "tesoura") || 0 == strcmp(z, "lagarto"))
			{
				printf ("Caso #%d: Bazinga!\n", i);
			}
			else
			{
				printf ("Caso #%d: Raj trapaceou!\n", i);
			}
		}
	}
}