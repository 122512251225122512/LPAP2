int busca_primeiro(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return i; // Elemento encontrado, retorna o índice
        }
    }
    return -1; // Elemento não encontrado
}


#include <stdio.h>

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = 5;
    int elemento = 10;

    int indice = busca_primeiro(vetor, tamanho, elemento);

    if (indice != -1) {
        printf("O elemento %d foi encontrado no índice %d.\n", elemento, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
