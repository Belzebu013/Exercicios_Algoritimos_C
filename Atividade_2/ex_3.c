//3. Escreva um programa que encontre o maior entre três números.

#include<stdio.h>
main(){
	int x, y, z;
	printf("Digite x: ");
	scanf("%d",&x);
	printf("Digite y: ");
	scanf("%d",&y);
	printf("Digite z: ");
	scanf("%d",&z);
	if(x>y && x>z){
		printf("x(%d) e maior que y(%d) e z(%d).",x,y,z);
	}else{
		if(y>x && y>z){
			printf("y(%d) e maior que x(%d) e z(%d).",y,x,z);
		}else{
			if(z>x && z>y){
				printf("z(%d) e maior que x(%d) e y(%d).",z,x,y);
			}
		}
	}


}
