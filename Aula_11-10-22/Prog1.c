#include <stdlib.h>;
#include <stdio.h>;

int main(void) {

    int valor, i, result, final;
    i=1;

    printf("Digite o valor da tabuada: ");
    scanf("%d",&valor);

    printf("Digite o final da tabuada: ");
    scanf("%d",&final);

    while(i <= final) {

        result = valor*i;
        printf("%d x %d = %d\n",valor, i, result);
        i++;

    }

    return 0;
}