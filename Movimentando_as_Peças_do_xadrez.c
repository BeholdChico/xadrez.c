#include <stdio.h>

int main() {
    // --------------------------
    // Movimento da Torre
    // --------------------------
    int casasTorre = 5; // Número de casas a mover
    printf("--- Movimento da Torre ---\n");
    // Torre se move horizontalmente ou verticalmente, aqui vamos para a direita
    for(int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // --------------------------
    // Movimento do Bispo
    // --------------------------
    int casasBispo = 5; // Número de casas a mover
    printf("\n--- Movimento do Bispo ---\n");
    int contadorBispo = 1;
    // Bispo se move na diagonal, aqui simulando "Cima, Direita"
    while(contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // --------------------------
    // Movimento da Rainha
    // --------------------------
    int casasRainha = 8; // Número de casas a mover
    printf("\n--- Movimento da Rainha ---\n");
    int contadorRainha = 1;
    // Rainha se move em todas as direções, aqui simulando movimento para a esquerda
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while(contadorRainha <= casasRainha);

    return 0;
}
