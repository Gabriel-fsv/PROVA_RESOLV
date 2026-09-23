#include <stdio.h>

int main(void) {
    int n, i;
    float x0, x1, x2, media;

    printf("Digite a quantidade n de amostras: ");
    scanf("%d", &n);

    printf("Digite a amostra 1: ");
    scanf("%f", &x0);

    printf("Digite a amostra 2: ");
    scanf("%f", &x1);

    for (i = 3; i <= n; i++) {
        printf("Digite a amostra %d: ", i);
        scanf("%f", &x2);

        media = (x0 + x1 + x2) / 3;

        printf("y%d = %.2f\n", i - 1, media);

        x0 = x1;
        x1 = x2;
    }

    return 0;
}

// Eu pensei corretamente em trabalhar com três variáveis, já que não podia usar vetor.
// A ideia de calcular a média de três valores também estava correta.
// Porém, eu li três novas amostras a cada repetição.
// Isso fez com que eu não calculasse as médias das janelas sobrepostas.
// A IA resolveu isso reutilizando as duas amostras anteriores.
// Também percebi que a média final que calculei não era pedida.
// Se fizesse novamente, usaria uma janela deslizante como na solução da IA.