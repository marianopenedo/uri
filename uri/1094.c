#include <stdio.h>

int main ()
{
	int j,t, d,C=0,S=0,R=0,total;
	double pc, ps,pr,a,r1,s1,c1;
	char b;
    scanf ("%d", &t);
    
    for (j = 0; j < t; j++)
    {
        scanf ("%lf %c", &a, &b);
        
        if (b == 'C')
        {
        	C+=a;
        }
        if (b == 'R')
        {
        	R+=a;
        }
        if (b == 'S')
        {
        	S+=a;
        }
    }
    total= C+R+S;
    c1= C/100;
    s1= S/100;
    r1= R/100;
    pc = (C * 100.0) / total;
    ps =(S * 100.0) / total;
    pr =(R * 100.0) / total;
    printf ("Total: %d cobaias\n", total);
    printf ("Total de coelhos: %d\n", C);
    printf ("Total de ratos: %d\n", R);
    printf ("Total de sapos: %d\n", S);
    printf ("Percentual de coelhos: %.2lf %\n", pc);
    printf ("Percentual de ratos: %.2lf %\n", pr);
    printf ("Percentual de sapos: %.2lf %\n", ps);
}