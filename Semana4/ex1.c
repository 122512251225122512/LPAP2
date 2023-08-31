#include <stdio.h>

// Função para somar três valores de ponto flutuante
float somar_valores(float a, float b, float c) {
    return a + b + c;
}

int main() {
    float valor1, valor2, valor3;
    
    // Solicita que o usuário digite os 3 valores numéricos
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);
    
    // Chama a função para calcular a soma dos valores
    float resultado = somar_valores(valor1, valor2, valor3);
    
    // Imprime o valor retornado pela função
    printf("A soma dos valores é: %.2f\n", resultado);
    
    return 0;
}
