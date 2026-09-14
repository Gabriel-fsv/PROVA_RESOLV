#include <stdio.h>
    int main(void){

        int n, i;
        int x0, x1, x2;
        float medini, medfin, result;

        printf("Digite a quantidade n de amostras: \n");
        scanf("%d", &n);

        for(i = 0; i < n; i++){
            printf("Digite o valor de x:\n");
            scanf("%d", &x0);

            printf("Digite o valor de y:\n");
            scanf("%d", &x1);
            
            printf("Digite o valor de z:\n");
            scanf("%d", &x2);

            medini = (float)(x0 + x1 + x2)/3;

            medfin = medfin + medini;

        }

        result = medfin/n;

        printf("Media final: %f", result);

        return 0;
    }