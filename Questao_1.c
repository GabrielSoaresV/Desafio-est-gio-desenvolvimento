// Bibliotecas
#include <stdio.h>

// Função recursiva que calcula a soma dos dígitos de um número
int soma(int N) {
    
    if (N == 0) {
        return 0;
    }

    // Chamada recursiva:
    return (N % 10) + soma(N / 10);
}

// Função principal
int main() {
    
    int N; // Variável do número digitado pelo usuário

    // Solicita ao usuário que digite um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N); 

    // Verifica se o número é positivo caso não seja ela encerra o programa
    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    }

    // A função soma calcula a soma de todos os dígitos do número N de forma recursiva
    int resultado = soma(N);
    
    printf("A soma dos dígitos de %d é: %d\n", N, resultado);

    return 0;
}
