#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    double av1, av2, media;

    printf("Escreva a nota da AV1: ");
    scanf("%lf", &av1);
    printf("Escreva a nota da AV2: ");
    scanf("%lf", &av2);

    media = (av1 * 4.5 + av2 * 6.5)/11;

    printf("Media do aluno: %.1lf\n", media);

    system("pause");
}