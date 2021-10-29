#include <stdio.h>
#include <stdlib.h>

int main()
{
   double cale;
   double cm,Centymetr;
   Centymetr=2.54;

   printf("Kalkulator cali na centymetry \n ile chcesz zamienic cali na cm: ");
   scanf("%lf",&cale);

   cm=cale*Centymetr;

   printf("wynik to: %lf",cm);

   return 0;
}
?
