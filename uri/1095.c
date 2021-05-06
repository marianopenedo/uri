#include <stdio.h>
int main ()
{
    int a,i=1,j=60;
    for (a = 0 ; a < 60; a++)
    {
        printf ("I=%d J=%d\n", i,j);
        i+=3; 
        j-=5;
        if (j == 0)
        {
        	printf ("I=%d J=0\n", i);
        	break;
        }
    }
}