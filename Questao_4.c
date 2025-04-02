//Bibliotecas
#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que insira as notas
    printf("Digite as notas usando '.' para separar.\n");

    // Solicita e lê a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    // Solicita e lê a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // Solicita e lê a terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das três notas
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média calculada
    printf("Media: %.2f\n", media);

    // Verifica se a média é maior ou igual a 6.0 (aprovado) ou menor que 6.0 (reprovado)
    if (media >= 6.0) {
        printf("Aprovado! Com a media de: %.2f\n", media);
    } else {
        printf("Reprovado! A sua media foi de: %.2f\n", media);
    }

    return 0;
}
