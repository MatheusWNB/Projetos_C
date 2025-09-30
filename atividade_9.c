#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("/home/matheuswnb/arquivo.txt", "w");

    if (arquivo == NULL){
        return 1;
    };

    char nome[15];
    int tamanho_nome;
    
    printf("Digite seu nome:\n");
    printf("Nome: ");
    scanf("%s", &nome);

    fprintf(arquivo, "O nome do usuário é: %s\n", nome);
    fprintf(arquivo, "Arquivo criado em C.\n");
    fprintf(arquivo, "Agora irei mostrar os números: \n");

    fclose(arquivo);
    
    tamanho_nome = strlen(nome);

    if (tamanho_nome <= 15 && strcmp(nome, "Matheus") == 1){
        printf("O nome ta dboa\n");
    } else if (tamanho_nome > 15 && nome[0] == 'M' || strcmp(nome, "Matheus") == 0){
        printf("Nome muito grande tchê ou tu se chama Matheus\n");
    };
    
    int indices_nome;
    for (indices_nome = 0; indices_nome < tamanho_nome; indices_nome++){
        printf("%c*", nome[indices_nome]);
    }

    putchar('\n');

    int numero;

    printf("Digite um número inteiro:\n");
    printf("Número inteiro: ");
    scanf("%d", &numero);

    int numeros_percorridos = 1;

    for(numeros_percorridos; numeros_percorridos <= numero; numeros_percorridos++)
    {
        printf("Número atual: %d\n", numeros_percorridos);
        int par_ou_impar = numeros_percorridos % 2;

        if (par_ou_impar == 0)
            printf("Esse número é par\n");
        else 
            printf("Esse número é ímpar\n");
        
        int linha = 0;
        for(linha; linha <= 20; linha++)
            printf("-");
        
        printf("\n");
    };

    return 0;
}