#include <stdio.h>

int main() {

    int eleitor, branco, nulo, valido;
    float conta;

    printf("Número total de eleitores: ");
    scanf("%d", &eleitor);

    printf("\nNúmero total de votos brancos: ");
    scanf("%d", &branco);

    printf("\nNúmero total de votos nulos: ");
    scanf("%d", &nulo);
    
    printf("\nNúmero total de votos válidos: ");
    scanf("%d", &valido);

    conta = (branco * 100) / eleitor;

    printf("\n%.2f%% dos eleitores votaram branco", conta);

    conta = (nulo * 100) / eleitor;

    printf("\n%.2f%% dos eleitores votaram nulo", conta);

    conta = (valido * 100) / eleitor;

    printf("\n%.2f%% dos eleitores votaram em algum candidato", conta);
    return 0;
}