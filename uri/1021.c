#include <stdio.h>

int main ()
{
    int cem,cinq,vinte,dez,cinco,dois,um,m1,m50,m25,m10,m5,m1c,dinheiro,moed,a,e,i,o,u;
    double quantia, moedas;
    
    scanf("%lf", &quantia);

    dinheiro = quantia;
    cem = dinheiro / 100;
    cinq = (dinheiro%100)/ 50;
    vinte = ((dinheiro%100)%50)/ 20;
    dez = (((dinheiro%100)%50)%20)/ 10;
    cinco = ((((dinheiro%100)%50)%20)%10)/ 5;
    dois = (((((dinheiro%100)%50)%20)%10)%5)/ 2;
    m1 = (((((dinheiro%100)%50)%20)%10%5)%2);
    
    moedas = quantia*100;
    moed = (int) moedas;
    e = moed % 100;

    m50 = e / 50;
    o = e % 50;

    m25 = o / 25;
    u = o % 25;

    m10 = u / 10;
    i = u % 10;

    m5 = i / 5;
    m1c = i % 5;
    
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cinq);
    printf ("%d nota(s) de R$ 20.00\n", vinte);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinco);
    printf ("%d nota(s) de R$ 2.00\n", dois);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", m1);
    printf ("%d moeda(s) de R$ 0.50\n", m50);
    printf ("%d moeda(s) de R$ 0.25\n", m25);
    printf ("%d moeda(s) de R$ 0.10\n", m10);
    printf ("%d moeda(s) de R$ 0.05\n", m5);
    printf ("%d moeda(s) de R$ 0.01\n", m1c);
}