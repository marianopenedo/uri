#include <stdio.h>

int main ()
{
    int a,b,c,i,j;
    
    scanf ("%d %d %d", &a,&b,&c);
    
    if (a < b && b < c)
    {
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
    else if (b < a && a < c)
    {
        printf ("%d\n",b);
        printf ("%d\n",a);
        printf ("%d\n",c);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
    else if (c < b && b < a)
    {
        printf ("%d\n",c);
        printf ("%d\n",b);
        printf ("%d\n",a);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
    else if (a < c && c < b)
    {
        printf ("%d\n",a);
        printf ("%d\n",c);
        printf ("%d\n",b);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
    if (b < c && c < a)
    {
        printf ("%d\n",b);
        printf ("%d\n",c);
        printf ("%d\n",a);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
    if (c < a && a < b)
    {
        printf ("%d\n",c);
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("\n");
        printf ("%d\n",a);
        printf ("%d\n",b);
        printf ("%d\n",c);
        return 0;
    }
}