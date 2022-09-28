//1. Escreva um programa que lê dois números inteiro e verifica se eles são iguais

#include<stdio.h>
main(){
	int x, y;
	printf("Digite x: ");
	scanf("%d",&x);
	printf("Digite y: ");
	scanf("%d",&y);
	x==y ? printf("%d e %d sao iguais.",x,y) : printf("%d e %d sao diferentes.",x,y);


}
