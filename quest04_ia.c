#include <stdio.h>

int main(void) {
    int numero, soma = 0, contador = 0;

    scanf("%d", &numero);

    while (numero != -1) {

        if (numero >= 0 && numero <= 255) {
            soma += numero;
            contador++;
        }

        scanf("%d", &numero);
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}

// Eu já tinha entendido a lógica de somar e contar apenas os valores válidos.
// Meu principal erro foi tentar usar o while com numero antes de inicializá-lo.
// A IA mostrou que o break poderia ser substituído pela condição do while conforme tinha iniciado.
// Os continue poderiam ser substituídos por um if verificando o intervalo.
// Eu manteria essa estrutura e faria apenas essas correções.