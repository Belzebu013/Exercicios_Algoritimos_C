/*1. Implemente um método recursivo que receba como entrada um número inteiro positivo N e retorne o seguinte cálculo:

1 + 2 + 3 + 4 + ... + N.
*/

#include <stdio.h>
int soma_recursiva(int x){
    if(x==1)
        return 1;
    return soma_recursiva(x-1)+x;
    
}


int main()
{
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d", soma_recursiva(n));
    
}
