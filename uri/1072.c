#include <stdio.h>

int main ()
{
    int b,x,y=0,a, count=0;
    scanf ("%d",&x);
    
    for (a = 0; a < x; a++)
    {
        scanf ("%d", &b);
        if (b >= 10 && b <=20)
        {
            count++;
        }
        else 
        {
            y++;
        }
    }
    printf ("%d in\n",count);
    printf ("%d out\n", y++);
}