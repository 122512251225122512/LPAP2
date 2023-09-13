#include <stdio.h>

// Função para verificar se um elemento está em um vetor
int estaNoVetor(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // O elemento está no vetor
        }
    }
    return 0; // O elemento não está no vetor
}

// Função para calcular a união de dois vetores
void calcularUniao(int A[], int tamA, int B[], int tamB) {
    printf("A ∪ B = {");

    // Imprimir elementos do vetor A
    for (int i = 0; i < tamA; i++) {
        printf("%d", A[i]);

        // Verificar se o elemento de A não está em B
        if (!estaNoVetor(B, tamB, A[i])) {
            printf(", ");
        } else if (i < tamA - 1) {
            printf(", ");
        }
    }

    // Imprimir elementos de B que não estão em A
    for (int i = 0; i < tamB; i++) {
        if (!estaNoVetor(A, tamA, B[i])) {
            printf("%d", B[i]);
            if (i < tamB - 1) {
                printf(", ");
            }
        }
    }

    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamA = 5;
    int B[] = {4, 2, 9, 5};
    int tamB = 4;

    printf("A[] = {7, 2, 5, 8, 4}\n");
    printf("B[] = {4, 2, 9, 5}\n");
    calcularUniao(A, tamA, B, tamB);

    int C[] = {3, 9, 11};
    int tamC = 3;
    int D[] = {2, 6, 1};
    int tamD = 3;

    printf("\nA[] = {3, 9, 11}\n");
    printf("B[] = {2, 6, 1}\n");
    calcularUniao(C, tamC, D, tamD);

    return 0;
}
