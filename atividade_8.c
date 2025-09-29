#include <stdio.h>
#include <string.h>
#include <math.h>

const double x = 1.5;

int main() {
    int validacao = 0;

    for(validacao; validacao != 1; validacao++)
    {
        if (validacao != 1){
            int z, y;
            double r;

            printf("Defina os valores de z e y:\n");

            printf("Valor de z: ");
            scanf("%d", &z);
            printf("Valor de y: ");
            scanf("%d", &y);

            printf(
                "Esses são os valores definidos:\n"
                "Valor da constante x = %0.1f\n"
                "Valor de z = %d\n"
                "Valor de y = %d\n", x, z, y
            );

            r = z * (x + y);
            printf("r = %0.1f\n", r);

            printf("Entrando nas condições...\n");


            if (r >= 30 && x + z == 30){
                validacao = 0;

                printf(" A primeira condição foi atendida\n");
            } else if (r >= 50 || z + x == 30){
                validacao = 0;

                printf("A segunda condição foi atendida:\n");

                // Analisa qual das lógicas foi atendida
                if (r >= 50 && z + x == 30){
                    printf("Ambas as lógicas (r <= 50) (z+x == 30) foram atendidas\n");
                } else if (r >= 50){
                    printf("A primeira lógica (r <= 50) foi atendida\n");
                } else if (z + x == 30){
                    printf("A segunda lógica (z + x == 30) foi atendida\n");
                };

            } else if (y % 2 == 0){
                validacao = 0;
                printf("Terceira condição atendida\n");
            } else {
                validacao = 1;
                printf("Nenhuma condição foi atendida!\n");
            };
        } else {
            printf("\n");
            continue;
        };


    };

    printf("Fim do programa\n)");
    return 0;

}