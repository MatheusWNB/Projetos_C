#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBinario(unsigned int n){
    int i;
    int bits = sizeof(n) * 8;

    printf("Valor em binário: ");
    
    for(i = bits - 1; i >= 0; i--){
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main(){
    //Operadores bit a bit (&, |, ^, <<,>>)

    unsigned x, y;
    printf("Valor de x: ");
    scanf("%u", &x);
    printf("Valor binário de x = ");
    printBinario(x);

    printf("Valor de y: ");
    scanf("%u", &y);
    printf("Valor binário de y = ");
    printBinario(y);

    unsigned int z = x & y;

    printf("Valor de z = x & y: %d\n", z);
    printBinario(z);

    z = x | y;
    printf("Valor de z = x | y: %d\n", z);
    printBinario(z);

    z = x ^ y;
    printf("Valor de z = x ^ y: %d\n", z);
    printBinario(z);

    z = (x * 500) << 2;
    printBinario(z);

    z = y >> 1;
    printBinario(z);



    return 0;

}