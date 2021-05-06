#include <stdio.h>

int main ()
{
    int a = 0,c;
   	scanf ("%d", &c);
    
    
    while (a < 6)
    {
    	if (c % 2 !=0)
    	{
    		printf ("%d\n", c);
    		a++;
    		c++;
    	}
    	else
    	{
    		c++;
    	}
    }  
}