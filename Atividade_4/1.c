//1) Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:  

#include<stdio.h>

 retorna(int* idade){
	int id;
	id = *idade;
	if(id>=5 && id<= 7){
		printf("Infantil A");
	}else{
		if(id>=8 && id<= 10){
			printf("Infantil B");
		}else{
			if(id>=11 && id<=13){
				printf("Juvenil A");
			}else{
				if(id>=14 && id<=17){
					printf("Juvenil B");
				}else{
					if(id>18){
						printf("Adulto");
					}
				}
			}
		}
		}
	}
	

main(){
	int *a;
	printf("Digite sua idade: ");
	scanf("%d", &a);
	retorna(&a);
	
}




