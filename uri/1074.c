    #include <stdio.h>

    int main ()
    {
        int a,b,c;
        scanf ("%d", &c);
        for (a = 0; a < c; a++)
        {
            scanf ("%d", &b);
            if (b % 2 == 0 && b != 0)
            {
                if (b > 0)
                {
                    printf ("EVEN POSITIVE\n");
                }
                else if (b < 0)
                {
                    printf ("EVEN NEGATIVE\n");
                }
            }
            else if (b == 0)
            {
                printf ("NULL\n");
            }
            else if (b % 2 != 0)
            {
                if (b > 0)
                {
                    printf ("ODD POSITIVE\n");
                }
                else if (b < 0)
                {
                    printf ("ODD NEGATIVE\n");
                }
                
            }
        }
    }