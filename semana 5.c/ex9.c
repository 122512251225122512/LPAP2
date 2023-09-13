#include <stdio.h>

void calcularDiferenca(int A[], int tamA, int B[], int tamB) {
    printf("A - B = {");
    for (int i = 0; i < tamA; i++) {
        int estaEmB = 0; // Variável para verificar se o elemento está em B

        for (int j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                estaEmB = 1;
                break; // O elemento está em B, não é necessário continuar verificando
            }
        }

        if (!estaEmB) {
            printf("%d", A[i]);
            if (i < tamA - 1) {
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
    calcularDiferenca(A, tamA, B, tamB);

    int C[] = {3, 9, 11};
    int tamC = 3;
    int D[] = {2, 6, 1};
    int tamD = 3;

    printf("\nA[] = {3, 9, 11}\n");
    printf("B[] = {2, 6, 1}\n");
    calcularDiferenca(C, tamC, D, tamD);

    return 0;
}
