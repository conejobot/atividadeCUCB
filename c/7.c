#include <stdio.h>

int main() {
    float salario, vendas, conta;

    printf("Digite o salário do vendedor: ");
    scanf("%f", &salario);

    printf("Digite o valor total das vendas do vendedor: ");
    scanf("%f", &vendas);

    conta  = salario + (vendas * 0.05);

    printf("Salário final do vendedor: R$%.2f", conta);

    return 0;
}