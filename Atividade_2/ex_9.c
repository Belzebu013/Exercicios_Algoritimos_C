//9. Escreva um programa que lê três números x,y e z e diz se a soma deles é divisível por 3.

#include<stdio.h>
main(){
	int x, y, z, soma;
	printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite y: ");
	scanf("%d", &y);
	printf("Digite z: ");
	scanf("%d", &z);
	soma=x+y+z;
	soma%3==0 ? printf("A soma (x+y+z=%d) e divisivel por 3.", soma) : printf("A soma (x+y+z=%d) NAO e divisivel por 3.", soma);	
}
