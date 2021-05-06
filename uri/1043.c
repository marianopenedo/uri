#include <stdio.h>

int main()
{
	double a, b, c, area, perimetro;
	scanf("%lf %lf %lf", &a, &b, &c);

	if ( a > c-b  && a < b+c && c > b-a && c < b+a  && b > a-c && b < a+c)
	{
		perimetro = a + b + c;
		printf("Perimetro = %.1lf\n", perimetro);
		return 0;
	}
	else 
	{
		area = ((a+b) * c)/ 2;
		printf("Area = %.1lf\n", area);
		return 0;
	}
}


