//12. Escreva um programa que l� dois n�meros custo e faturamento. Escreva "obteve lucro" se faturamento - custo for positivo. Escreve "obteve preju�zo" se faturamento - custo for negativo.

#include<stdio.h>
main(){
	int custo, faturamento;
	printf("Digite o valor da faturamento: ");
	scanf("%d", &faturamento);
	printf("Digite o valor do custo: ");
	scanf("%d", &custo);
	(faturamento-custo) > 0 ? printf("Obteve lucro") : printf("Obteve Prejuizo");
}
