#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    const int velocidade_permitida = 80;
    const int raio_do_radar = 2;

    int trajeto = 150;
    int aceleracao_do_carro = 3;

    int velocidade_do_carro = 0;

    for(int loops = 0; loops <= 37; loops++){
        
        trajeto = trajeto - 4;
        velocidade_do_carro = velocidade_do_carro + aceleracao_do_carro;

        if (velocidade_do_carro >= 100 && trajeto <= raio_do_radar){
            printf("CARRO MULTADO NO LOOP %d ", loops);
            break;
        }
        
        printf(
            "Loop atual: %d\n"
            "\n"
            "Velocidade do carro: %d\n"
            "Trajeto do carro: %d\n", loops, velocidade_do_carro, trajeto
        );
        
        for(int i = 0; i <= 25; i++){
            putchar('-');
        }
        
        putchar('\n');

        if (trajeto == 0)
            break;
        else
            continue;

    }

    return 0;

}