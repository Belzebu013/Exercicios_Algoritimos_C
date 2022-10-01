#include <stdio.h>
int main(){

    int vec[4] = {},aux, i, j; // Vetor e aux pra ordernar
    int *p; // ponteiro para o vetor

    for(i=0;i<4;i++){ // obter o vetor do usuario
        printf("Digite o elemento de numero %d: ", i+1);
        scanf("%d",&vec[i]);
    }
    p = &vec[0]; // Ponteiro no primeiro elemento do vetor

            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if ((p+i)>(p+j)) // Ordena o vetor atravez dos ponteiros
                    {
                        aux = *(p+i);
                        *(p+i) = *(p+j);
                        *(p+j) = aux;
                    }
                }
            }
    for(i=4;i>=0;i--){
        printf(" %d ", vec[i]);
    }
    return 0;


}
