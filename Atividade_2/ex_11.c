//11. Escreva um programa que verifica quantas d�zias existem em um dado n�mero x, onde x � maior que 12. 

#include<stdio.h>
main(){
	int x, num_duzias;
	printf("Digite x: ");
	scanf("%d", &x);
	num_duzias = x/12;
	printf("Em %d existem %d duzias.", x, num_duzias);
}
