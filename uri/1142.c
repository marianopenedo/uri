#include <stdio.h>
int main ()
{
    int x,a,z=0;
    scanf ("%d", &x);
    
    for (a = 0; a < x; a++)
    {
        printf ("%d %d %d PUM\n", z+1, z+2,z+3);
        z+=4;
    }
}