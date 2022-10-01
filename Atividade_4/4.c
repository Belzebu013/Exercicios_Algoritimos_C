/* 4) A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, i;
    float salario, totalSalarios = 0, salarioMaior = 0, salarioMenor = 99999;

    do{
        printf("Quantos funcionais a empresa possui? ");
        scanf("%d", &quantidade);
    }while(quantidade < 0);

    for(i = 1; i <= quantidade; i++){
        printf("%d salario: ", i);
        scanf("%f", &salario);

        totalSalarios += salario;
        if(salarioMenor > salario)
            salarioMenor = salario;
        if(salarioMaior < salario)
            salarioMaior = salario;
    }
    printf("Salario medio R$%.2f\n", totalSalarios/quantidade);
    printf("Maior salario R$%.2f\n", salarioMaior);
    printf("Menor salario R$%.2f\n\n", salarioMenor);
}


