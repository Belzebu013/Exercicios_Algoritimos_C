//10. Escreva um programa que verifica se um caractere é uma vogal ou uma consoante.

#include<stdio.h>
main(){
	char letra;
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	switch(letra){
		case 'a':
			printf("Vogal");
			break;
		case 'i':
			printf("Vogal");
			break;
		case 'u':
			printf("Vogal");
			break;
		case 'e':
			printf("Vogal");
			break;
		case 'o':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
		

	}

}
