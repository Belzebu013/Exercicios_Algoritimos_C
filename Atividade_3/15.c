/*15. Uma pessoa aplicou n reais a juros mensais de j durante 1 ano. Determinar o montante de cada m�s durante este per�odo (n e j s�o n�meros
reais). */
#include<stdio.h>

//1 ano = 12 meses; 
//1 ano = 12 x j;
main(){
	float n, j, montante;
	int i;
	printf("Digite o capital investido: ");
	scanf("%f", &n);
	printf("Digite o percentual de juros mensais: ");
	scanf("%f", &j);
	for(i=1; i<=12; i++){
		montante += n*j;
		printf("\nMes %d, montante: %f", i, montante);
	};
	
}
