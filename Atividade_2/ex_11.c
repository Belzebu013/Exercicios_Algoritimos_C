//11. Escreva um programa que verifica quantas dúzias existem em um dado número x, onde x é maior que 12. 

#include<stdio.h>
main(){
	int x, num_duzias;
	printf("Digite x: ");
	scanf("%d", &x);
	num_duzias = x/12;
	printf("Em %d existem %d duzias.", x, num_duzias);
}
