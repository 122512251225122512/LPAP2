#include <stdio.h>

// Função para verificar se um número é primo
int primo(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se for divisível por algum número, não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int N1, N2;

    printf("Digite dois números inteiros (N1 e N2): ");
    scanf("%d %d", &N1, &N2);

    printf("Números primos entre %d e %d:\n", N1, N2);

    for (int i = N1; i <= N2; i++) {
        if (primo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}