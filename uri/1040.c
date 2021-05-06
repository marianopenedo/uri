#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,exame,media;
    
    scanf ("%lf", &n1);
    scanf ("%lf", &n2);
    scanf ("%lf", &n3);
    scanf ("%lf", &n4);
    
    media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    
    if (media >= 7.0)
    {
        printf ("Media: %.1lf\n", media);
        printf ("Aluno aprovado.\n");
        return 0;
    }
    if (media < 5.0)
    {
        printf ("Media: %.1lf\n", media);
        printf ("Aluno reprovado.\n");
        return 0;
    }
    if (media>=5.0 || media <= 6.9)
    {
        printf ("Media: %.1lf\n", media);
        printf ("Aluno em exame.\n");
        scanf ("%lf", &exame);
        printf ("Nota do exame: %.1lf\n", exame);
        media = (media+exame)/2;
        if (media > 5)
        {
            printf ("Aluno aprovado.\n");
        }
        else
    {
        printf ("Aluno reprovado.\n");
    }
        printf ("Media final: %.1lf\n", media);
        return 0;
    }
}