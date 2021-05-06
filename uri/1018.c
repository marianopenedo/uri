#include <stdio.h>

int main ()
{
    int cem,cinq,vinte,dez,cinco,dois,um,dinheiro;
    scanf("%d", &dinheiro);
    
    cem = dinheiro / 100;
    cinq = (dinheiro%100)/ 50;
    vinte = ((dinheiro%100)%50)/ 20;
    dez = (((dinheiro%100)%50)%20)/ 10;
    cinco = ((((dinheiro%100)%50)%20)%10)/ 5;
    dois = (((((dinheiro%100)%50)%20)%10)%5)/ 2;
    um = (((((dinheiro%100)%50)%20)%10%5)%2);
    
    printf ("%d\n", dinheiro);
    printf ("%d nota(s) de R$ 100,00\n", cem);
    printf ("%d nota(s) de R$ 50,00\n", cinq);
    printf ("%d nota(s) de R$ 20,00\n", vinte);
    printf ("%d nota(s) de R$ 10,00\n", dez);
    printf ("%d nota(s) de R$ 5,00\n", cinco);
    printf ("%d nota(s) de R$ 2,00\n", dois);
    printf ("%d nota(s) de R$ 1,00\n", um);
}