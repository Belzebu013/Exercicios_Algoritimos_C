/*11. Dados x inteiro (inteiros positivos e negativos) e n natural (inteiros
positivos), calcular x
n
(x elevado à n). */
#include<stdio.h>

main(){
	int x, n, i, res;
	printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n>0){
			res = res*x;	
		};
	}
	printf("%d", res);


}
