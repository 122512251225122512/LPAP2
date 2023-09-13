int busca_qtde(int v[], int n, int e) {
    int quantidade = 0; // Inicialmente, a quantidade de ocorrências é zero

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            quantidade++; // Incrementa a quantidade quando encontra uma ocorrência do elemento
        }
    }

    return quantidade; // Retorna a quantidade de ocorrências do elemento no vetor
}

#include <stdio.h>

int main() {
    int vetor[] = {4, 9, 10, 8, 6, 10};
    int tamanho = 6;
    int elemento = 10;

    int quantidade = busca_qtde(vetor, tamanho, elemento);

    printf("O elemento %d aparece %d vezes no vetor.\n", elemento, quantidade);

    return 0;
}
