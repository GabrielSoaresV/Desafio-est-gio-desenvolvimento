//Bibliotecas
#include <stdio.h>

int main() {

    // Declaração das variaveis
    int i, num;

    printf("Digite um número:");
    scanf("%d", &num);

    if(num <= 1) {
        printf("%d não é um número primo", num);
    } else {
        // Laço de repetição para verificar se o número é divisível por algum número
        for(i = 2; i < num; i++) {
            if(num % i == 0) { 
                printf("%d não é um número primo", num);
                break;
            }
        }
        
        // Se o laço termina sem encontrar nenhum divisor, o número é primo
        if(i == num) {
            printf("%d é um número primo", num);
        }
    }

    return 0;
}
