#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true; // Elemento encontrado no vetor
        }
    }
    return false; // Elemento não encontrado no vetor
}

#include <stdio.h>

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = 5;
    int elemento = 10;

    if (contem(vetor, tamanho, elemento)) {
        printf("O vetor contém o elemento %d.\n", elemento);
    } else {
        printf("O vetor NÃO contém o elemento %d.\n", elemento);
    }

    return 0;
}
