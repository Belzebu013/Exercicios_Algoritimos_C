/*3) 
 Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um tri�ngulo e, neste caso, retornar qual o tipo de tri�ngulo formado. Para que X, Y e Z formem um tri�ngulo � necess�rio que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de tri�ngulo formado observando as seguintes defini��es:

Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
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
