#include <stdio.h>

int main ()
{
	int g,i,emp=0,count=1,inter=0,gre=0,y;
	for (; ;)
	{
		scanf ("%d %d", &g, &i);
		printf ("Novo grenal (1-sim 2-nao)\n");
		scanf ("%d",&y);
		while (y != 1 && y != 2) 
		{
			printf ("Novo grenal (1-sim 2-nao)\n");
			scanf ("%d", &y);
		}
		if (y == 1)
		{
			if (g > i)
		{
			inter++;
		}
		else if ( g == i) 
		{
			emp++;
		}
		else 
		{
			gre++;
		}
		
			count++;
			continue;
		}
		else if (y == 2)
		{
				if (g > i)
		{
			inter++;
		}
		else if ( g == i) 
		{
			emp++;
		}
		else 
		{
			gre++;
		}
			printf ("%d grenais\n",count);
			printf ("Inter:%d\n",inter);
			printf ("Gremio:%d\n", gre);
			printf ("Empates:%d\n",emp);
			if (inter > gre)
			{
				printf ("Inter venceu mais\n");
			}
			else
				printf ("Gremio venceu mais\n");
		break;
		}
	}
}