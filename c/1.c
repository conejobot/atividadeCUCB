#include <stdio.h>

int main() {
    int a;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("O valor que você digitou é : %d", a);
    --a;
    printf("\nE o seu antecessor é: %d", a);

    return 0;
}