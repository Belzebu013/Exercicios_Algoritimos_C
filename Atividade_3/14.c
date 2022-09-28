/*14. Dado n natural, determinar n! (n fatorial, ou seja, para n = 5, temos
que 5! = 5 * 4 * 3 * 2 * 1 = 120) */

#include<stdio.h>
main(){
	int n, i;
	long int fat;
	printf("Digite n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		fat *= i;
	};
	printf("%d! = %ld", n, fat);
	
	return 0;
}
