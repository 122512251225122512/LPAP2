#include <stdio.h>

float c2f(float celsius) {
  float fahrenheit = (celsius * 9 / 5) + 32;
  return fahrenheit;
}

float f2c(float fahrenheit) {
  float celsius = (fahrenheit - 32) * 5 / 9;
  return celsius;
}

int main() {
  printf("Escolha uma opção:\n");
  printf("1. Converter de Celsius para Fahrenheit\n");
  printf("2. Converter de Fahrenheit para Celsius\n");

  int escolha;
  scanf("%d", &escolha);

  if (escolha == 1) {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = c2f(celsius);
    printf("A temperatura em Fahrenheit é: %.2f °F\n", fahrenheit);
  } else if (escolha == 2) {
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = f2c(fahrenheit);
    printf("A temperatura em Celsius é: %.2f °C\n", celsius);
  } else {
    printf("Opção inválida!\n");
  }

  return 0;
}
