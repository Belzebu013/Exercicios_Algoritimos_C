//7. Dado x e y, onde y > x sempre, fa�a um programa que escreve o
//intervalo de x at� y.
#include<stdio.h>
main(){
	int x, y;
	printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite y: ");
	scanf("%d", &y);
	while(x<=y){
		printf("%d", x);
		x++;
	}
	
}
