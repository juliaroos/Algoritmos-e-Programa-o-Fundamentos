#include <stdio.h>
#include <math.h>


int main(){

    int soma = 0;
    int num = 0;

    while (num <= 198) {
        soma = soma + num;
        num = num + 1; 
    }

    printf("A soma dos valores de 0 ate 198 eh: %d\n", soma);

    return 0;
}
