//8. Escreva um programa que l� dois n�meros x e y e diz se x � divis�vel por 2 e y � divis�vel por 3. 
#include<stdio.h>

main(){
	int x, y;
	printf("digite x: ");
	scanf("%d", &x);
	printf("digite y: ");
	scanf("%d", &y);
	if(x%2==0 && y%3==0){
		printf("x(%d) e divisivel por 2 e y(%d) e divisivel por 3.", x,y);
	}else{
		if(x%2==0){
			printf("x(%d) e divisivel por 2.",x);
		}else{
			if(y%3==0){
				printf("y(%d) e divisivel por 3.",y);
			}else{
				printf("Nenhuma das opcoes foi atendida.");
			}
		}
	}
}

