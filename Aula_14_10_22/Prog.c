#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void){

    int l, c, n, b;

    printf("Escolha o tamanho: ");
    scanf("%d", &n);

    printf("\n\n1\n");
    for(c = 0; c < n; c++){
        printf("X ");
    }

    printf("\n\n2\n");
    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            printf("X ");
        }
        printf("\n");
    }

    printf("\n\n3\n");
    for(l = 0; l < n; l++){
        for(c = 0; c <= l; c++){
            printf("X ");
        }
        printf("\n");
    }

    printf("\n\n4\n");
    for(l = 0; l < n; l++){
        for(b = 0; b < n-l; b++){
            printf("  ");
        }
        for(c = 0; c <= l; c++){
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}