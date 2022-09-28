//2. Dado n, escrever os n primeiros naturais pares.
#include<stdio.h>

main(){
	int x,i, var;
	printf("Digite x: ");
	scanf("%d", &x);
	for(i=2; i<=(x*2); i+=2){
		printf("\n%d ", i);
	}
	
}
