//13. Para doar sangue � necess�rio ter entre 16 e 69 anos e pesar no m�nimo 50 kg. Escreva um programa que l� a idade e o peso e diz se a pessoa pode ou n�o doar sangue.

#include<stdio.h>
main(){
	int idade, peso;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu peso: ");
	scanf("%d", &peso);
	(idade>=16 && idade<=69) && peso>=50 ? printf("Pode doar sangue.") : printf("Nao pode doar sangue");
}
