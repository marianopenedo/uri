#include <stdio.h>

int main ()
{
    int a,b,aux=0,i,soma=0;
   scanf ("%d %d", &a,&b);
   while (b <= 0)
   {
       scanf ("%d", &b);
   }
   if ( b > a)
   {
      aux = b;
      b = a;
      a = aux;
   }
   for (i = 0; i < b; i++)
   {
     soma+=a+i;
   }
   printf ("%d\n", soma);
   
   
}