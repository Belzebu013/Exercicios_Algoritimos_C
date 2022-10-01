/*
6) Fa�a um procedimento que recebe, por par�metro, um valor N e calcula e escreve a tabuada de 1 at� N. Mostre a tabuada na forma:
*/

#include<stdio.h>

void tabuada(int* x){
	int mult, i, n=1;
	mult = *x;
	for(i=1; i <= mult ; i++){
		n = mult * i;
		printf("\n%d x %d = %d", mult, i, n);
	}
}

main(){
	int *n;
	printf("Digite n: ");
	scanf("%d", &n);
	tabuada(&n);
}
