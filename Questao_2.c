// Bibliotecas
#include <stdio.h>

// Função que calcula o tamanho da string
int tamanho_string(char *str) {
    int tamanho = 0;
    
    // Laço que percorre para verificar o tamanho da string
    while (str[tamanho] != '\0') {
        tamanho++; 
}
    return tamanho;
}

// Função que faz o cálculo para verificar se a string é um palíndromo.
int Palindromo(char *str, int size) {
    
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 1]) {
            return 0;
        }
    }
    return 1; 
}

// Função para verificar o valor do Array
int main() {
    char palnd[100];  // Array para armazenar a string
    
    printf("Digite uma palavra: ");
    scanf("%s", palnd);  // Lê a palavra digitada e armazena no array 'palnd'

    // Calcula o tamanho da palavra utilizando a função 'tamanho_string'
    int tamanho = tamanho_string(palnd);

    // Verifica se a palavra é um palíndromo utilizando a função 'Palindromo'
    if (Palindromo(palnd, tamanho)) {
        printf("%s é palíndromo\n", palnd);
    } else {
        printf("%s não é palíndromo\n", palnd);
    }

    return 0;
}
