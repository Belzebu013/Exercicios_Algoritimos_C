//5. Escreva um programa que verifica se um número é par ou ímpar.

#include<stdio.h>

main(){
	int x;
	printf("digite x: ");
	scanf("%d", &x);
	x % 2 == 0 ? printf("numero par") : printf("numero impar"); 
	return 0;
}
