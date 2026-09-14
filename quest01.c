#include <stdio.h>
    int main(void){

        int m;
        int b1, b2, b3;
        int ab1, ab2;

        printf("Digite um valor M: \n");
        scanf("%d", &m);

        b1 = m % 2;
        ab1 = m / 2;

        b2 = ab1 % 2;
        ab2 = ab1 / 2;

        b3 = ab2 % 2;

        printf("O valor M: %d%d%d\n", b3, b2, b1);

        printf("\n");
        printf("O valor R: %d\n", b3);
        printf("O valor G: %d\n", b2);
        printf("O valor B: %d\n", b1);

        if(b1 == 1){
            printf("O BIT será escondido no B\n");
        }

        else if(b2 == 1){
            printf("O BIT será escondido no G\n");
        }

        else if(b3 == 1){
            printf("O BIT será escondido no R\n");
        }

        else 
            printf("Voce forneceu um valor nulo!");

        return 0;
    }