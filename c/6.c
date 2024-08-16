#include <stdio.h>

int main() {
    float fabrica, distribuidor, imposto;
    float conta_dist, conta_imp, custo_final;

    distribuidor = 0.28;
    imposto = 0.45;

    printf("Digite o valor do custo de fábrica: ");
    scanf("%f", &fabrica);

    conta_dist= fabrica * distribuidor;
    conta_imp = fabrica * imposto;
    custo_final = conta_dist + conta_imp + fabrica;

    printf("O custo final ao consumidor será de: %f", custo_final);

    return 0;
}
