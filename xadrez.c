#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre - 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (while)
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (do-while)
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo - 2 casas para baixo e 1 para a esquerda (for + while)
    printf("\nMovimento do Cavalo:\n");

    // Usando for para as duas casas para baixo
    for (int m = 0; m < 2; m++) {
        printf("Baixo\n");
    }

    // Usando while para a casa para a esquerda
    int n = 0;
    while (n < 1) {
        printf("Esquerda\n");
        n++;
    }

    return 0;
}
