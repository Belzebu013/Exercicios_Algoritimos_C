/*
5) Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.
*/

#include<stdio.h>

void fatorial(int* fator){
	int fat, i;
	long int res=1;
	fat = *fator;
	for(i=1; i <= fat; i++){
		res = res * i;
	};
	printf("\n%ld! = %d", fat, res);
	
}

main(){
	int *x;
	printf("Digite x: ");
	scanf("%d", &x);
	fatorial(&x);
}
