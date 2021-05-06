#include <stdio.h>
int main ()
{
    int a,i,j=8;
    
    for (i = 1; i < 10; i+=2)
    { 

        for (a = 7; a >= 0; a--)
        {
             j--;
        	 if (a == 4)
        	 {  
                // printf ("%d\n", j);
                j+=6;
                break;
        	 }
        	 printf ("I=%d J=%d\n", i,j);
        }
    }
}