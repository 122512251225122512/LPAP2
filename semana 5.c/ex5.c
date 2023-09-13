int busca_ultimo(int v[], int n, int e) {
    int indice = -1; // Inicialmente, definimos o índice como -1 para indicar que o elemento não foi encontrado

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            indice = i; // Atualiza o índice quando encontra uma ocorrência do elemento
        }
    }

    return indice; // Retorna o índice da última ocorrência ou -1 se não for encontrado
}

#include <stdio.h>

int main() {
    int vetor[] = {4, 9, 10, 8, 6, 10};
    int tamanho = 6;
    int elemento = 10;

    int indice = busca_ultimo(vetor, tamanho, elemento);

    if (indice != -1) {
        printf("O elemento %d foi encontrado pela última vez no índice %d.\n", elemento, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
