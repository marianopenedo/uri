#include <stdio.h>

int main ()
{
	//char a[10], c[10], d[1],z[1],y[1],k[1];
	int b,hora1,min1,sec1,hora2,min2,sec2,x,sf,hf,mf;
	scanf ("Dia %d", a, &b);
	scanf ("%d : %d : %d\n", &hora1, d, &min1, z, &sec1);
	scanf ("Dia %d", c, &x);
	scanf ("%d : %d : %d", &hora2, y, &min2, k, &sec2);

	x -= b;
	if (hora2 >= hora1)
	{
		hf = hora2-hora1;
	}
	else 
	{	x --;
		hf = 24-hora1+hora2;
		
	}
	if (min2 >= min1)
	{
		mf = min2-min1;
	}
	else 
	{	
		hf --;
		mf = 60-min1+min2;
		
	}
	if (sec2 >= sec1)
	{
		sf = sec2-sec1;
	}
	else 
	{	
		mf--;
		sf = 60-sec1+sec2;
		
	}
	printf ("%d dia(s)\n", x);
	printf ("%d hora(s)\n", hf);
	printf ("%d minuto(s)\n", mf);
	printf ("%d segundo(s)\n", sf);

}