#include <stdio.h>

int main()
{
	int a, b,x,y,i,soma= 0;
    scanf ("%d", &i);
    for (a = 0; a < i; a++){
    	scanf ("%d %d", &x, &y);
    	
    	if ( x % 2 == 0)
    	{
    		x+=1;
    	}
    	for (b = 0; b < y; b++)
    	{
    		if (x % 2 != 0)
    		{
    			soma+=x;
    			x+=2;
    		}	
    	}
    	printf ("%d\n", soma);
    	soma = 0;
    }
}