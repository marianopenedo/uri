#include <stdio.h>

int main ()
{
	double a,b,c, x1,x2,x3;
	scanf ("%lf %lf %lf", &x1,&x2,&x3);

	if ( x1 >= x2  && x1 >= x3)
	{	
		a=x1;
		if (x2 >= x3)
		{
			b = x2;
			c = x3;
		}
		else
		{
			b = x3; 
			c = x2;
		}
	}
	if (x2 >= x3 && x2 >= x1)
	{
		a=x2;
		if (x1 >= x3)
		{
			b=x1;
			c=x3;
		}
		else
		{
			b = x3;
			c = x1;
		}

	}
	if (x3 >= x2 && x3 >= x1)
	{
		a=x3;
		if (x1 >= x2)
		{
			b=x1;
			c=x2;
		}
		else
		{
			b = x1;
			c = x2;
		}
	}

		if (a < 0)
		{
			return 0;
		}
		else if (b < 0)
		{
			return 0;
		}
		else if (c < 0)
		{
			return 0;
		}

		if (a >= b + c)
		{
		printf ("NAO FORMA TRIANGULO\n");
		}
		else if (a*a == b*b + c*c)
		{
		printf ("TRIANGULO RETANGULO\n");
		}
		else if (a*a > b*b + c*c)
		{
			printf ("TRIANGULO OBTUSANGULO\n");
		}
		else if (a*a < b*b + c*c)
		{
			printf ("TRIANGULO ACUTANGULO\n");
		}

		if (a == b && b==c )
		{
			printf ("TRIANGULO EQUILATERO\n");
		}
		else if (a == b || b==c)
		{
			printf ("TRIANGULO ISOSCELES\n");
		}




}