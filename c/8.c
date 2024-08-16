#include <stdio.h>

int main() {
    float temp, celsius;

    printf("Digite o valor da temperatura (em Fahrenheit): ");
    scanf("%f", &temp);

    celsius = ((temp - 32) / 9) * 5;

    printf("O valor correspondente da temperatura em Celsius é de: %.1fº Celsius", celsius);

    return 0;
}