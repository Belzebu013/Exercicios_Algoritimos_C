/*12. Números primos são os números naturais p
' que têm apenas dois divisores: 1 e p
'
, ou seja ele mesmo.
Para descobrir se um dado número p é primo, você pode verificar se
existe algum número entre 1 e p que divide p além de 1 e ele mesmo.
Se houver tal número, então p não é primo. Caso contrário, p é primo.
Dado p inteiro, verificar se p é primo.
*/

#include<stdio.h>

main(){
	int x, i;
	int div = 0;
	do{
		printf("Digite um numero inteiro e positivo: ");
    	scanf("%d", &x);
	}while(x<=0);
	
	for(i=1; i<=x; i++){
		if(x%i==0){
			div++;
		}
	}
	
	if(div==2){
		printf("O numero %d e primo!", x);
	}else{
		printf("O numero %d nao e primo!", x);
	};
    	
  	return 0;
}
