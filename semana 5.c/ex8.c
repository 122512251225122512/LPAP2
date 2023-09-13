#include <stdio.h>

void encontrarIntersecao(int A[], int tamA, int B[], int tamB) {
    printf("A ∩ B = {");
    for (int i = 0; i < tamA; i++) {
        for (int j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                printf("%d", A[i]);
                if (i < tamA - 1) {
                    printf(", ");
                }
                break; // Não é necessário continuar procurando por este elemento em B
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
    encontrarIntersecao(A, tamA, B, tamB);

    int C[] = {3, 9, 11};
    int tamC = 3;
    int D[] = {2, 6, 1};
    int tamD = 3;

    printf("\nA[] = {3, 9, 11}\n");
    printf("B[] = {2, 6, 1}\n");
    encontrarIntersecao(C, tamC, D, tamD);

    return 0;
}
