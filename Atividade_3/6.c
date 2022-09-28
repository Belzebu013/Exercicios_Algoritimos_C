//6. Dado n, calcular a soma dos n primeiros números pares.
#include<stdio.h>
main(){
	int x, i, soma;
	printf("Digite x: ");
	scanf("%d", &x);
	i=0;
	soma = 0;
	x = x * 2;
	while(i<=x){
		soma += i;
		i = i + 2;
	}
	printf("%d", soma);
	
}
