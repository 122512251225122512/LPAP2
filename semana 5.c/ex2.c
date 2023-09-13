#include <stdio.h>

void inverterVetor(int v[], int tam) {
    int temp;
    
    for (int i = 0; i < tam / 2; i++) {
        // Trocar o elemento i com o elemento correspondente no final do vetor
        temp = v[i];
        v[i] = v[tam - 1 - i];
        v[tam - 1 - i] = temp;
    }
}

int main() {
    int V[] = {4, 9, 10, 8, 6};
    int tam = 5;

    printf("Vetor original: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", V[i]);
    }

    inverterVetor(V, tam);

    printf("\nVetor invertido: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
