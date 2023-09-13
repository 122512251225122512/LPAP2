#include <stdio.h>

int contarValoresDiferentes(int v[], int n) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        int valorAtual = v[i];
        int encontrado = 0; // Variável para verificar se o valor já foi contado como diferente

        // Verifica se o valor atual já foi encontrado antes
        for (int j = 0; j < i; j++) {
            if (v[j] == valorAtual) {
                encontrado = 1;
                break;
            }
        }

        // Se o valor não foi encontrado antes, incrementa o contador
        if (!encontrado) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6, 10, 4};
    int tamanho = 7;

    int quantidadeValoresDiferentes = contarValoresDiferentes(vetor, tamanho);

    printf("Quantidade de valores diferentes: %d\n", quantidadeValoresDiferentes);

    return 0;
}
