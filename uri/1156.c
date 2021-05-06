#include <stdio.h>

int main ()
{
    double s=0, a,c,count = 1; 
    for (a = 1; a <= 39; a+=2)
    {
    	c = a/count;
        s += c;   
      	count*=2;
    }
     printf ("%.2lf\n", s);
     return 0;
}