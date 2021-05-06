#include <stdio.h>
int main ()
{
	int a,x,k,count=0,c,aux=0,subs=0;
	scanf ("%d", &a);
	int n[a];
	for (x = 0; x < a; x++)
	{
		scanf ("%d", &n[x]);
	}
	for (x = 0; x < a; x++)
	{
		if (n[x] < n[aux])
		{
			subs = n[x];
			aux = x;
		}
	}
	printf ("Menor valor: %d\n", subs);
	printf ("Posicao: %d\n", aux);
}