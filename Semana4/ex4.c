#include <stdio.h>

// Função para verificar se D é divisor de N
int e_divisor(int N, int D) {
    if (N % D == 0) {
        return 1;
    } else {
        return 0;
    }
}

// Função para contar a quantidade de divisores de M
int contar_divisores(int M) {
    int cont = 0;
    for (int i = 1; i <= M; i++) {
        if (e_divisor(M, i)) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int numero, quantidade_divisores;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    quantidade_divisores = contar_divisores(numero);
    
    printf("O número %d possui %d divisores.\n", numero, quantidade_divisores);
    
    return 0;
}