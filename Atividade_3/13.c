/*13. Dado n natural, escrever os n primeiros primos */
#include<stdio.h>

main(){
	int a=0,b,c,n,d;          
    printf("Quantos numeros primos pretende exibir? ");
    scanf("%i",&n);
    d=n*(-1);
    printf("Os primeiros %i numeros primos sao:\n",n);
    do{
	  	a++;        
        c=0;
        for(b=1;b<a;b++)
            if(a%b==0){
             	c++;
				}if(c==1){
             		printf("%i\n",a);     
             		d++;
               	}
    }while(d); 
    printf("\n\n");     
	
	return 0;
}
