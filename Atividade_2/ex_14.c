//14 . Chama-se ano bissexto o ano ao qual � acrescentado um dia extra, ficando com 366 dias, um dia a mais do que os anos normais de 365 dias. Isto ocorre a cada quatro anos e � feito com o objetivo de manter o calend�rio anual ajustado com a transla��o da Terra e com os eventos sazonais relacionados �s esta��es do ano. 
//A origem do nome bissexto adv�m da implanta��o do Calend�rio Juliano em 48 a.C. que se modificou evoluindo para o Calend�rio Gregoriano que hoje � usado em muitos pa�ses a todos os quais ocorrem os anos bissextos. Um ano � bissexto se a sua divis�o por 400 tem resto zero, ou seja, se o ano � divis�vel por 400. O ano tamb�m � dito bissexto se � divis�vel por 4, mas n�o � divis�vel por 100. Escreva um programa que determina se um dado n�mero � bissexto.

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
