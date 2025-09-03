#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior;

    // Lê 10 valores do usuário
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Assume que o primeiro número é o maior inicialmente
    maior = numeros[0];

    // Encontra o maior número
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibe o maior número
    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}
