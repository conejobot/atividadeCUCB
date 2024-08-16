#include <stdio.h>

int main() {
    int base, altura, area;

    printf("Digite o valor da base do retângulo: ");
    scanf("%d", &base);

    printf("\nDigite o valor da altura do retângulo: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("\nA área do retângulo é: %d", area);

    return 0;
}