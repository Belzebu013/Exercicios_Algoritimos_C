/*2. . Implemente um método recursivo que receba como entrada um número inteiro positivo N e retorne o seguinte cálculo:

tes
*/


#include <stdio.h>
float soma_recursiva(float x){
    if(x==1.0)
        return 1.0;
    return soma_recursiva(x-1) + 1/x;
    
}


int main()
{
    float n;
    printf("Digite n: ");
    scanf("%f", &n);
    printf("%f", soma_recursiva(n));
    
}