//13. Para doar sangue é necessário ter entre 16 e 69 anos e pesar no mínimo 50 kg. Escreva um programa que lê a idade e o peso e diz se a pessoa pode ou não doar sangue.

#include<stdio.h>
main(){
	int idade, peso;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu peso: ");
	scanf("%d", &peso);
	(idade>=16 && idade<=69) && peso>=50 ? printf("Pode doar sangue.") : printf("Nao pode doar sangue");
}
