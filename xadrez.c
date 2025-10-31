#include <stdio.h>

/*
 * Programa que simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * Utiliza estruturas de repetição for, while e do-while para cada peça.
 * Os movimentos são simulados imprimindo a direção a cada casa percorrida.
 */

int main() {
    // Variáveis para controle dos loops (inteiros)
    int i, j, k;

    // Simulação do movimento da Torre: 5 casas para a direita usando for
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        // Imprime a direção do movimento a cada casa
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo: 5 casas na diagonal para cima e à direita usando while
    printf("\nMovimento do Bispo:\n");
    j = 0;  // Inicializa contador
    while (j < 5) {
        // Imprime a combinação de direções para a diagonal
        printf("Cima, Direita\n");
        j++;  // Incrementa contador
    }

    // Simulação do movimento da Rainha: 8 casas para a esquerda usando do-while
    printf("\nMovimento da Rainha:\n");
    k = 0;  // Inicializa contador
    do {
        // Imprime a direção do movimento a cada casa
        printf("Esquerda\n");
        k++;  // Incrementa contador
    } while (k < 8);

    return 0;
}
