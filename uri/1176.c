#include <stdio.h>

long long int fibo (long long int y)
{
    long long int c,b,a,z;
    c = 0;
    b = 1;
    if (y == 0)
    {
        return 0;
    }
    else if (y == 1)
    {
        return 1;
    }
    for (a = 1; a < y;a++)
    {
        z = c+b;
        c = b;
        b = z;
    }
    return z;
}


int main ()
{
    long long int x,a,y,b;
    scanf ("%lld", &x);
    long long int z[x];
    
    for (a = 0; a < x; a++)
    {   
        scanf ("%lld", &y);
        printf ("Fib(%lld) = %lld\n", y, fibo(y));
    }   
}