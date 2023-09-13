#include <stdbool.h>

bool crescente(int v[], int n) {
    if (n <= 1) {
        return true; // Um vetor com 0 ou 1 elemento é considerado crescente
    }

    for (int i = 1; i < n; i++) {
        if (v[i] <= v[i - 1]) {
            return false; // Se encontrarmos um elemento menor ou igual ao anterior, não é crescente
        }
    }

    return true; // Se chegamos até aqui, o vetor é crescente
}


#include <stdio.h>

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {1, 3, 2, 4, 5};

    if (crescente(vetor1, 5)) {
        printf("O vetor 1 está em ordem crescente.\n");
    } else {
        printf("O vetor 1 NÃO está em ordem crescente.\n");
    }

    if (crescente(vetor2, 5)) {
        printf("O vetor 2 está em ordem crescente.\n");
    } else {
        printf("O vetor 2 NÃO está em ordem crescente.\n");
    }

    return 0;
}
