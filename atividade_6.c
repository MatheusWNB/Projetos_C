#include <stdio.h>
#include <math.h>

int main(){
    double x, y;

    printf("Digite os números\n");
    printf("Valor 1: ");
    scanf("%lf", &x);
    printf("Valor 2: ");
    scanf("%lf", &y);

    long double xy = (long double) pow((double)x, (double)y);

    printf("Valor da potência: %Lf", xy);
    return 0;
    
}