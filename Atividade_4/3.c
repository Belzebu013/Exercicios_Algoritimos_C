/*3) 
 Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include<stdio.h>

void verifica_triangulo(int *x, int* y, int* z){
	int x1, x2, x3;
	x1 = *x;
	x2 = *y;
	x3 = *z;
	if(x1 == x2 && x3){
		printf("Triangulo Equilatero");
	}else{
		if(x1 == x2 || x1 == x3 || x2 == x3){
			printf("Triangulo Isosceles");
		}else{
			if(x1 != x2 != x3){
				printf("Triangulo Escaleno");
			}
		}
	}
}

main(){
	int *a, *b, *c;
	printf("Digite o valor do lado a: ");
	scanf("%d", &a);
	printf("Digite o valor do lado b: ");
	scanf("%d", &b);
	printf("Digite o valor do lado c: ");
	scanf("%d", &c);
	verifica_triangulo(&a, &b, &c);
}
