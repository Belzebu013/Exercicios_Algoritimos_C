//7. Escreva um programa que verifica se um n�mero � divis�vel por 3.

#include<stdio.h>

main(){
	int x;
	printf("digite x: ");
	scanf("%d", &x);
	x%3==0 ? printf("%d e divisivel por 3.", x) : printf("%d NAO e divisivel por 3.", x);
}

