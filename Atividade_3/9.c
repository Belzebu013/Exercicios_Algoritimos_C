/*9. Dado um número n, onde n > 0 sempre, faça um programa que calcule
a sua tabuada.*/
#include<stdio.h>
main(){
	int x, i, res;
	printf("Digite x: ");
	scanf("%d", &x);
	for(i=1; i<=10; i++){
		res = i * x;
		printf("\n%d x %d = %d", i, x, res);
	}
	
	
	return 0;
}
