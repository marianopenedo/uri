#include <stdio.h>

int main ()
{
    double sal,reajuste,salario;
    scanf ("%lf", &salario);
    
    if (salario >= 0 && salario <=400)
    {
        sal = salario;
        reajuste = 0.15;
        salario = salario+salario*reajuste;
    }
    else if (salario > 400 && salario <= 800)
    {
        sal = salario;
        reajuste = 0.12;
        salario = salario + salario*reajuste;
    }
    else if (salario > 800 && salario <= 1200)
    {
        sal = salario;
        reajuste = 0.10;
        salario = salario + salario*reajuste;
    }
    else if (salario > 1200 &&   salario <= 2000)
    {
        sal = salario;
        reajuste = 0.07;
        salario = salario + salario*reajuste;
    }
    else 
    {
        sal = salario;
        reajuste = 0.04;
        salario = salario + salario*reajuste;
    }
    printf ("Novo salario: %.2lf\n", salario);
    printf ("Reajuste ganho: %.2lf\n", sal*reajuste);
    printf ("Em percentual: %.0lf %\n", reajuste*100);
}