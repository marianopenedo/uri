#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c,maiorab, maiorabc;
    scanf ("%d %d %d", &a, &b, &c);

    maiorab = (a+b+abs(a-b))/2;
   
    if (maiorab == a)
    {
    	if (a < c)
    		printf ("%d eh o maior\n", c);
    	else 
    		printf ("%d eh o maior\n", a);
    }
    else
    {
    	if (b < c)
    		printf ("%d eh o maior\n", c);
    	else
    		printf ("%d eh o maior\n", b);
    }
	 


}