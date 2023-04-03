#include <stdio.h>

int main() {
    int decimal, resto, quociente, i = 1, binario = 0, temp_decimal;
    char hexadecimal[20], octal[20];
    int j, k;

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    temp_decimal = decimal;

    // Calcula o número binário
    quociente = decimal;
    while (quociente != 0) {
        resto = quociente % 2;
        quociente = quociente / 2;
        binario = binario + resto * i;
        i = i * 10;
    }

    // Calcula o número hexadecimal
    quociente = decimal;
    j = 0;
    while (quociente != 0) {
        resto = quociente % 16;
        if (resto < 10) {
            hexadecimal[j++] = 48 + resto;
        } else {
            hexadecimal[j++] = 55 + resto;
        }
        quociente = quociente / 16;
    }
    hexadecimal[j] = '\0';
    strrev(hexadecimal);

    // Calcula o número octal
    quociente = decimal;
    k = 0;
    while (quociente != 0) {
        resto = quociente % 8;
        octal[k++] = 48 + resto;
        quociente = quociente / 8;
    }
    octal[k] = '\0';
    strrev(octal);

    printf("O número decimal %d em binário é: %d\n", decimal, binario);
    printf("O número decimal %d em hexadecimal é: %s\n", decimal, hexadecimal);
    printf("O número decimal %d em octal é: %s\n", decimal, octal);

    return 0;
}
