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
    
    // Loop de verificação
    do {
        
    // Solicita ao usuário que digite um valor
    printf("Digite um valor: ");
    scanf("%d", &N); 
    
    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
    }
    
    } while (N <= 0);

    // A função soma calcula a soma de todos os dígitos
    int resultado = soma(N);
    
    printf("A soma dos dígitos de %d é: %d\n", N, resultado);

    return 0;
}
