#include <stdio.h>

main(){
	int x, y, z;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	z = x;
	x = y;
	y = z;
	printf("O valor de x agora e %d\nO valor de y agora e %d", x, y);

	
	return 0;
}
