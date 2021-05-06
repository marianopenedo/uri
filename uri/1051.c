#include <stdio.h>

int main ()
{
    double imposto,a,b,c;
    scanf ("%lf", &imposto);
    
    
    
    if (imposto >= 0.0 && imposto <= 2000)
    {
        printf ("Isento\n");
        return 0;
    }
    else if (imposto >= 2000.01 && imposto <= 3000)
    {
        a = ((imposto-2000)*0.08);
        imposto = a;
    }
    else if (imposto >= 3000.01 && imposto <= 4500)
    {
        a = 80;
        b = ((imposto-3000)*0.18);
        imposto = a+b;
    }
    else
    {
        a = 80;
        b = 270;
        c = ((imposto - 4500)*0.28);
        imposto = a+b+c;
    }
    printf ("R$ %.2lf\n", imposto);
}