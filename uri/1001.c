#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
   int A;
   int B;
   printf ("Digite aqui o valor de A: ");
   scanf ("%d", &A);
   printf ("Digite aqui o valor de B: ");
   scanf ("%d", &B);
   
   int X = A+B;
   
   printf ("X = %d", X);
    return 0;
}