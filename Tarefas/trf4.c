#include <stdio.h>
#include <stdlib.h>

int mediaidades(int idades[]) {
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade %d:", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }
    return soma / 10;
}

void encontrarMenorMaiorAltura(float altura[]) {
    float maior, menor;

    maior = altura[0];
    menor = altura[0];
    for (int i = 0; i < 10; i++) {
        printf("Digite a altura do aluno %d: ", i + 1);
        scanf("%f", &altura[i]);

        if (altura[i] > maior) {
            maior = altura[i];
        }
        if (altura[i] < menor) {
            menor = altura[i];
        }
    }
    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
}

void multiplicacaoDeMatrizEscalar(int matriz[][3], int escalar) {
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    printf("Matriz resultante após multiplicação:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j] * escalar);
        }
        printf("\n");
    }
}

void somarMatriz(int matriz1[][2], int matriz2[][2]) {
    printf("Digite os elementos da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &matriz1[i][j]);

    printf("Digite os elementos da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int idades[10];
    float media;

    printf("### Função 1 ###\n");
    media = mediaidades(idades);
    printf("Media das idades: %.2f\n", media);

    printf("### Função 2 ###\n");
    float alturas[10];
    encontrarMenorMaiorAltura(alturas);

    printf("### Função 3 ###\n");
    int matrizEscalar[3][3];
    int escalar;
    printf("Digite o valor escalar:");
    scanf("%d", &escalar);
    multiplicacaoDeMatrizEscalar(matrizEscalar, escalar);

    printf("### Função 4 ###\n");
    int matriz1[2][2], matriz2[2][2];
    somarMatriz(matriz1, matriz2);
    return 0;
}
