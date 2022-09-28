#include <stdio.h>

main(){
	char nome[10], endereco[50];
	int telefone, numero_residencia;
	printf("Digite seu nome: ");
	gets(nome);
	printf("Ola %s, por favor digite seu endereco: ", nome);
	gets (endereco);
	printf("Digite o numero da sua residencia: ", numero_residencia);
	scanf("%d", &numero_residencia);
	printf("Muito bem %s, agora por favor digite seu numero de telefone: ", nome);
	scanf("%d", &telefone);
	printf("Usuario %s, residente no endereco ", nome); puts(endereco); printf("numero %d, portador do telefone %d", numero_residencia, telefone);	
	return 0;
}
