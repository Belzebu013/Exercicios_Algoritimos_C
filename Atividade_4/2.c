//2) Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:

#include<stdio.h>

void retorna_conceito(float* x){
	float media;
	media = *x;
	if(media >= 0.0 && media <= 4.9){
		printf("D");
	}else{
		if(media >= 5.0 && media <= 6.9){
			printf("C");
		}else{
			if(media >= 7.0 && media <= 8.0){
				printf("B");
			}else{
				printf("A");
			}
		}
	}
}

main(){
	float *nota;
	printf("Digite a nota: ");
	scanf("%f", &nota);
	retorna_conceito(&nota);
	
}
