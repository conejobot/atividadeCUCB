#include <stdio.h>

int main() {
    float salario;
    int conta, percentual, novo;

    printf("Digite o salário do funcinário: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%d", &percentual);

    conta = (salario * percentual) / 100;
    novo = salario + conta;

    printf("\nO novo salário do funcionário será de: R$%d,00", novo);
    return 0;
}