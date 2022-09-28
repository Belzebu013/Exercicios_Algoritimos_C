//14 . Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando com 366 dias, um dia a mais do que os anos normais de 365 dias. Isto ocorre a cada quatro anos e é feito com o objetivo de manter o calendário anual ajustado com a translação da Terra e com os eventos sazonais relacionados às estações do ano. 
//A origem do nome bissexto advém da implantação do Calendário Juliano em 48 a.C. que se modificou evoluindo para o Calendário Gregoriano que hoje é usado em muitos países a todos os quais ocorrem os anos bissextos. Um ano é bissexto se a sua divisão por 400 tem resto zero, ou seja, se o ano é divisível por 400. O ano também é dito bissexto se é divisível por 4, mas não é divisível por 100. Escreva um programa que determina se um dado número é bissexto.

#include<stdio.h>
main(){
	int ano, ano_bissexto;
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if(ano%4==0 && ano%100!=0){
		printf("O ano %d e bissexto.", ano);
	}else{
		printf("O ano %d nao e bissexto.", ano);
	}

}
