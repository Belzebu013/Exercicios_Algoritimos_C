/*12. N�meros primos s�o os n�meros naturais p
' que t�m apenas dois divisores: 1 e p
'
, ou seja ele mesmo.
Para descobrir se um dado n�mero p � primo, voc� pode verificar se
existe algum n�mero entre 1 e p que divide p al�m de 1 e ele mesmo.
Se houver tal n�mero, ent�o p n�o � primo. Caso contr�rio, p � primo.
Dado p inteiro, verificar se p � primo.
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
