/*18.O n�mero de Euler e pode ser representado e calculado por meio da
utiliza��o da s�rie de Taylor para e
x quando x = 1, como a soma da
seguinte s�rie infinita: */

#include<stdio.h>

main(){
	int n;
	int i,j;
	float f, e=1.0;
	printf("Digite n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		f = 1;
		printf("\n1/%d!",i);
		for(j=1; j<=i; j++){
			f= f * j;
		}
		e = e + 1.0 / f;	
	}
	printf("e = %f\n",e);
	
	return 0;
}

