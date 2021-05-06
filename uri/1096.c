#include <stdio.h>
int main ()
{
    int a,i,j;
    
    for (i = 1; i < 10; i+=2)
    {
        for (j = 7; j >= 5; j--)
        {
        	if (j == 4)
        	{
        		break;
        	}
        	printf ("I=%2.d J=%2.d\n", i,j);
        }
    }
}