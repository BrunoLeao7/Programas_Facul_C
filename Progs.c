#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int prog;

    printf("Escolha o programa de 1 a ...: ");
    scanf("%d", &prog);

    switch (prog)
    {
        case 1:
        {
            p1();
        }

        case 2:
        {
            p2();            
        }

    }   
}

void p1() 
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

void p2()
{

    int a, b, c, d, pontos;

    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);
    printf("Digite o valor C: ");
    scanf("%d", &c);
    printf("Digite o valor D: ");
    scanf("%d", &d);

    pontos = (a * b - c * d);

    printf("Pontos: %d", pontos);

}