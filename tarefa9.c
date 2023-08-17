#include <stdio.h>

int main() {
    float custoFabrica;
    const float percentualDistribuidor = 0.28; // 28%
    const float percentualImpostos = 0.45; // 45%

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    float custoDistribuidor = custoFabrica * percentualDistribuidor;
    float custoImpostos = custoFabrica * percentualImpostos;

    float custoConsumidor = custoFabrica + custoDistribuidor + custoImpostos;

    printf("O custo final ao consumidor é: %.2f\n", custoConsumidor);

    return 0;
}