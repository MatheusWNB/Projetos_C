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
    const int metros_trajeto = 5;

    //Definindo as características do radar
    const int posicao_do_radar_1 = 80;
    const int alcance_do_radar = posicao_do_radar_1 - 5;
    const int limite_velocidade = 100;

    //Permissões do programa
    int permissao_multa = 0;

    int quantidade_de_loops = 0;

    for (int i = 0; posicao_do_carro <= posicao_do_radar_1; i++){
        posicao_do_carro += metros_trajeto;
        quantidade_de_loops++;
    }

    posicao_do_carro = 0;

    //Começando o percurso
    for (int loops = 0; loops < quantidade_de_loops; loops++){
        //Verifica se o carro ultrapassou a velocidade
        if (velocidade_do_carro >= limite_velocidade && posicao_do_carro >= alcance_do_radar){
            if (permissao_multa == 1)
                continue;

            permissao_multa = 1;
            fprintf(multas,
                "CARRO MULTADO NO RADAR 1!\n"
                "-------------------------\n"
            );

            fprintf(multas,
                "Velocidade do carro: %0.1f.\n"
                "Posição do carro: %d.\n", velocidade_do_carro, posicao_do_carro
            );

        } else {
            permissao_multa = 2;
        }

    
        for (aceleracao_do_carro; aceleracao_do_carro <= 10; aceleracao_do_carro++){
            velocidade_do_carro = velocidade_do_carro + 0.5;
            usleep(50000);
        }
        
        aceleracao_do_carro = 0;
        posicao_do_carro += metros_trajeto;
        
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

        if (loops == quantidade_de_loops){
            switch(permissao_multa){
                case 1:
                printf("Carro multado");

                case 2:
                printf("Carro não multado");

            }
        }
            
    };

    fclose(multas);
    system("xdg-open /home/matheuswnb/multas.txt");


    return 0;

}