#include <stdio.h>
// 21

int main() {
  int n, fant, fatual, fprox, contador;             
  
  printf("Digite um numero n: ");
  scanf("%d", &n);
  
  fant   = 0;
  fatual = 1;
  contador = 1;
  
  while (contador < n) {
    fprox  = fatual + fant; 
    fant   = fatual;
    fatual = fprox;
    contador = contador + 1;
  }
  printf("Numero %d de Finobacci = %d\n", n, fatual);
  
}
