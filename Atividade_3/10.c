/*10. Faça um programa que, dado n e m, calcule as tabuadas de todos os
números de n até m.*/
#include<stdio.h>
main(){
	int x, i, res,y;
	printf("Digite x: ");
	scanf("%d", &x);
	printf("Digite y: ");
	scanf("%d", &y);
	i=1;
	while(x<=y){
		printf("\nTabuada do %d", x);
			for(i=1; i<=10; i++){
				res = x * i;
				printf("\n%d x %d = %d ", x, i, res);
			};
		printf("\n");
		x++;
	}
		

}
