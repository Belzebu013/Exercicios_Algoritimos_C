//1. Dado n, escrever os n primeiros n�meros naturais.

#include<stdio.h>

main(){
	int x,i;
	printf("Digite x: ");
	scanf("%d", &x);
	i = 1;
	while(i<=x){
		printf("\n%d",i);
		i++;
	}
	
}
