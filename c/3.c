#include <stdio.h>

int main() {
    int idade, dia;

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    dia = idade * 365;

    printf("Sua idade em dias são: %d", dia);
    return 0;
}