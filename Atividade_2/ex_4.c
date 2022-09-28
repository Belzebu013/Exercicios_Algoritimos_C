//4. Escreva um programa que verifica se um número é positivo, negativo, ou zero.

#include<stdio.h>

main(){
	int x;
	printf("digite x: ");
	scanf("%d", &x);
	x<0 ? printf("Negativo") : x==0 ? printf("Zero") : printf("Positivo");
}
