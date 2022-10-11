#include <stdlib.h>;
#include <stdio.h>;

int main(void) {

    int valor, i, result;
    i=1;

    printf("Digite o valor da tabuada: ");
    scanf("%d",&valor);

    while(i <= 10) {

        result = valor*i;
        printf("%d x %d = %d\n",valor, i, result);
        i++;

    }

    return 0;
}