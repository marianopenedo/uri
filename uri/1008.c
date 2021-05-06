#include <stdio.h>

int main ()
{
    int fun,h;
    float salario,valor;
    scanf ("%d", &fun);
    scanf ("%d", &h);
    scanf ("%f", &valor);
    salario = (valor * h);
    printf ("NUMBER = %d\n", fun);
    printf ("SALARY = U$ %.2f\n", salario);
}