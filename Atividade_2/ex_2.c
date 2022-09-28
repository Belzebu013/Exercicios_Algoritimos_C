//2. Escreva um programa que encontre o maior entre dois números.

#include<stdio.h>
main(){
	int x, y;
	printf("Digite x: ");
	scanf("%d",&x);
	printf("Digite y: ");
	scanf("%d",&y);
	x>y ? printf("x(%d) > y(%d).",x,y) : x==y ? printf("x(%d) = y(%d).",x,y) : printf("y(%d) > x(%d).",y,x);


}
