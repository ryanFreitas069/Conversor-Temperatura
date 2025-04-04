#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit; // Criando as variaveis
    printf("Insira o valor em Celsius que deseja converter:\n"); // Imprimindo o que se pede
    scanf("%f", &celsius); // Declarar valor da variavel Celsius
    fahrenheit = (celsius * 9/5) + 32; // Conversão
    printf("%.2f Graus Fahrenheit\n", fahrenheit); // Imprimindo o resultado
}