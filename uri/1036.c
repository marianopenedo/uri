#include <stdio.h>
#include <math.h>

int main ()
{
    double A, B, C,x,y,z, R1,R2;
    
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);

    z = A*2;
    x = (B*B-4*A*C);
   
    if (A == 0.0 || x < 0)
    {
        printf ("Impossivel calcular\n");
        return 0;
    }
    
    R1 = (-B+sqrt(x))/z;
    R2 = (-B-sqrt(x))/z;
    
    printf ("R1 = %.5lf\n", R1);
    printf ("R2 = %.5lf\n", R2);

}