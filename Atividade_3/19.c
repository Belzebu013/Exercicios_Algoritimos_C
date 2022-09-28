D/*ado um n�mero n, fa�a um programa que calcule p at� a n-�sima
itera��o, ou seja, para n = 4*/

#include <stdio.h>

int main(){
   printf("Calculando n�mero PI usando s�rie de Leibniz\n");

   printf("Este processo pode demorar um pouquinho, dependendo de sua CPU.\n");
   printf("O n�mero PI � gerado atrav�s de sucessivas somas e subtra��es 900 milh�es de vezes!\n");


   double pi = 4;
   double operador = -1;

   double i;
   for(i = 0; i < 900000000; i++){
      pi += operador*(4/(3+2*i));

      operador *= -1;
   }

   printf("Resultado: %.8f...\n", pi);

   return 0;
}



