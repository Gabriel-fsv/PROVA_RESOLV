int main(void) {
    int n, i;
    unsigned char x;
    int menor, maior;
    float normalizado;

    printf("Digite a quantidade de amostras: ");
    scanf("%d", &n);

    printf("Digite um valor de 0 a 255: ");
    scanf("%hhu", &x);

    menor = x;
    maior = x;

    for(i = 1; i < n; i++) {
        printf("Digite um valor de 0 a 255: ");
        scanf("%hhu", &x);

        if(x < menor)
            menor = x;

        if(x > maior)
            maior = x;
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    printf("Digite o valor para normalizar: ");
    scanf("%hhu", &x);

    if(menor == maior)
        printf("Nao e possivel normalizar.\n");
    else {
        normalizado = (float)(x - menor) / (maior - menor);
        printf("Valor normalizado: %.2f\n", normalizado);
    }

    return 0;

// Eu escolhi unsigned char porque as intensidades variam de 0 a 255.
// Também pensei corretamente em procurar o menor e o maior valor.
// Porém, usei o scanf de forma incorreta, pois faltou o & em x.
// A condição usando num também estava errada, pois essa variável não existia.
// A IA completou a parte da normalização e tratou a divisão por zero.
// Eu poderia retirar o while e controlar tudo apenas pelo número de amostras.