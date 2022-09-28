//20. Calcular a Soma


#include <stdarg.h>

main(){
	int n, i, aux;
	float soma=0;
	printf("Digine n: ");
	scanf("%d", &n);
	aux=n;
	for(i=1.0; i<=n; i++){
		soma = soma + i / (n - i + 1.0);
		printf("%d/%d + ", i,aux);
		aux -= 1;
		
	}
	printf("\nO valor da serie com %d termos eh: %f", n, soma);
	return 0;
}
