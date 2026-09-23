#include <stdio.h>

int main(void) {
    int M;
    int R, G, B;

    printf("Digite o valor de M (0 a 7): ");
    scanf("%d", &M);

    R = (M >> 2) & 1;
    G = (M >> 1) & 1;
    B = M & 1;

    printf("Bit 2 de M no R: %d\n", R);
    printf("Bit 1 de M no G: %d\n", G);
    printf("Bit 0 de M no B: %d\n", B);

    return 0;
}

// Eu consegui separar corretamente os três bits de M usando % e /.
// A IA fez isso de forma mais direta usando operações bit a bit.
// Meu else if acaba mostrando apenas um bit quando existem vários iguais a 1.
// Eu poderia testar cada bit separadamente.
// Também faltou verificar se M está no intervalo de 0 a 7.