#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char nome_aluno[10][10] = {
        {"Matheus"},
        {"Felipe"}
    };

    printf("%s\n", nome_aluno[0]);
    printf("%s\n", nome_aluno[1]);

    char nome_usuario[10];
    printf("Seu nome: ");
    scanf("%s", &nome_usuario);

    int indice;

    for(indice = 0; indice <= 2; indice++)
        {
            if (indice == 2){
                printf("Aluno não registrado!\n");
                return 0;
            };

            char *indice_aluno = nome_aluno[indice];
            int tamanho_string = strlen(indice_aluno);

            if (strncmp(nome_usuario, indice_aluno, tamanho_string) == 0){
                break;
            } else {
                continue;
            };
        };

    char disciplinas[12][12] = {
        {"Matemática"},
        {"Física"}
    };
    
    int disciplina_escolhida;
    printf(
        "Olá %s, digite qual disciplina você gostaria de acessar\n"
        "Matemática (0)\n"
        "Física (1)\n", nome_usuario
    );
    printf("Escolha a disciplina: ");
    scanf("%d", &disciplina_escolhida);
        
    switch (disciplina_escolhida){
        case 0:
        printf("%s\n", disciplinas[disciplina_escolhida]);
            
        break;
            
        case 1:
        printf("%s\n", disciplinas[disciplina_escolhida]);
            
    };
        
    return 0;
}