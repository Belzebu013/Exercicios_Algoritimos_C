D/*ado um número n, faça um programa que calcule p até a n-ésima
iteração, ou seja, para n = 4*/

#include <stdio.h>

int main(){
   printf("Calculando número PI usando série de Leibniz\n");

   printf("Este processo pode demorar um pouquinho, dependendo de sua CPU.\n");
   printf("O número PI é gerado através de sucessivas somas e subtrações 900 milhões de vezes!\n");


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



