#include <stdio.h>
#include <string.h>

int main ()
{
	char a[20], b[20], c[20];
	scanf ("%s", a);
	scanf("%s", b);
	scanf ("%s", c);
	
	if (0 == strcmp(a,"vertebrado"))
	{
		
		if (0 == strcmp(b,"ave"))
		{
		
				if (0 == strcmp(c,"carnivoro"))
				{
					printf ("aguia\n");
				}
		
				else if (0 == strcmp (c,"onivoro")) 
				{
					printf ("pomba\n");
				}
		}
		
		else if (0 == strcmp(b,"mamifero"))
		{
		
				if (0 == strcmp(c,"onivoro"))
				{
					printf ("homem\n");
				}
		
				else if (0 == strcmp (c,"herbivoro"))
				{
					printf ("vaca\n");
				}
		}
	}
	
	else if (0 == strcmp(a,"invertebrado"))
	{
		
		if (0 == strcmp(b,"inseto"))
		{
				if (0 == strcmp(c,"hematofago"))
				{
					printf ("pulga\n");
				}
				else if (0 == strcmp (c,"herbivoro"))
				{
					printf ("lagarta\n");
				}
		}


		else if (0 == strcmp(b,"anelideo"))
		{
			
				if (0 == strcmp(c,"hematofago"))
				{
					printf ("sanguessuga\n");
				}
				else if (0 == strcmp (c,"onivoro"))
				{
					printf ("minhoca\n");
				}
		}
	}
}