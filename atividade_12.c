#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    //Criando arquivo para multas
    FILE *multas;
    multas = fopen("/home/matheuswnb/multas.txt", "w");

    //Definindo as características do nosso objeto
    double velocidade_do_carro = 0.0;
    int posicao_do_carro = 0;
    int aceleracao_do_carro = 0;

    //Definindo as características do radar
    const int posicao_do_radar_1 = 220;
    const int alcance_do_radar = posicao_do_radar_1 - 5;
    const int limite_velocidade = 100;

    //Começando o percurso
    for (int loops = 0; loops <= 30 ; loops++){
        //Verifica se o carro ultrapassou a velocidade
        if (velocidade_do_carro >= limite_velocidade && posicao_do_carro >= alcance_do_radar){
            fprintf(multas,
                "CARRO MULTADO NO RADAR 1!\n"
                "-------------------------\n"
            );

            fprintf(multas,
                "Velocidade do carro: %0.1f.\n"
                "Posição do carro: %d.\n", velocidade_do_carro, posicao_do_carro
            );

            break;

        }

        for (aceleracao_do_carro; aceleracao_do_carro <= 10; aceleracao_do_carro++){
            velocidade_do_carro = velocidade_do_carro + 0.5;
            usleep(100000);
        }

        aceleracao_do_carro = 0;
        posicao_do_carro = posicao_do_carro + 8;

        int distancia_do_radar_1 = posicao_do_radar_1 - posicao_do_carro;

        printf(
            "---------------------------------\n"
            "---------------------------------\n"
        );

        printf(
            "Velocidade do carro: %0.1f.\n"
            "Posição do carro: %d.\n"
            "Distância do radar 1: %d.\n", velocidade_do_carro, posicao_do_carro, distancia_do_radar_1
        );
        
    }

    fclose(multas);
    system("xdg-open /home/matheuswnb/multas.txt");


    return 0;

}