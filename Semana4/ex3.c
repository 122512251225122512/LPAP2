#include <stdio.h>

// Função para imprimir a tabuada de um número N
void imprimirTabuada(int N) {
    printf("Tabuada do %d:\n", N);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    printf("\n");
}

int main() {
    // Chama a função para obter as tabuadas de 1 a 9
    for (int i = 1; i <= 9; i++) {
        imprimirTabuada(i);
    }
    
    return 0;
}