#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1 do aluno (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 do aluno (peso 3): ");
    scanf("%f", &nota2);

    printf("Digite a nota 3 do aluno (peso 5): ");
    scanf("%f", &nota3);

    media = ((2 * nota1) + (3 * nota2) + (5 * nota3) )/ 10;

    printf("\nA média final desse aluno foi de: %.1f", media);

    return 0;
}