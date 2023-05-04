#include <stdio.h>
#include <string.h>


char string()
{
	int b,x,i,z,cont=0,aux;
	char str[101],a[101];
	
	scanf("%d ", &i);
	getchar();
	
	for( z = 0; z < i; z++)
	{	
		fgets(str,101,stdin);
		int y = strlen(str)-1;
		//printf("y == %d\n",y);
		aux = y/2;
		//printf("aux = %d\n", aux);

		for(x = aux-1; x >= 0 ;x--,cont++) 
		{
			a[cont] = str[x];
			//printf("%d\n", cont);
		}	
			
		
		for(i = y-1; i >= aux; i--,cont++) 
		{
			a[cont] = str[i]; 
		}

		a[y] = '\0';
		str[y] = '\0';

		for(i = 0; i < y; i++)
		{
			printf("%c\n", a[i]);
		}
		//printf("%s\n",a);
		cont = 0;
	}
}

int main ()
{	
	string();
}