//7. Escreva um programa que verifica se um número é divisível por 3.

#include<stdio.h>

main(){
	int x;
	printf("digite x: ");
	scanf("%d", &x);
	x%3==0 ? printf("%d e divisivel por 3.", x) : printf("%d NAO e divisivel por 3.", x);
}

