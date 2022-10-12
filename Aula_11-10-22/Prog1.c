#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {

    int min=0, seg=0, ciclos=0, total;

    printf("Digite quantos minutos deseja contar: ");
    scanf("%d", &total);
    total = total*60;

    while(ciclos <= total) {

        printf("%02d:%02d\n", min, seg);
        seg++;

        if (seg%60 == 0) {
            
           min++;
           seg = 0;
        }
        
        sleep(1);
        system("cls");
        ciclos++;

    }
    printf("Acabou seu tempo!");
    return 0;
}