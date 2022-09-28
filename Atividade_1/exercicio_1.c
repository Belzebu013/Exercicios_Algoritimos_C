#include <stdio.h>

main(){
	char qualquer_coisa[50]; //declaração como string pois assim o usuario pode digitar tanto numeros quanto letras.
	printf("Digite qualquer coisa: ");
	scanf("%s", qualquer_coisa);
	printf("%s.", qualquer_coisa);
	
	
	return 0;
}
