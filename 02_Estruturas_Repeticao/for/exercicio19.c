#include <stdio.h>
#include <math.h>

int main()
{
    int num, divisor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num < 2) {
        printf("%d nao é primo.\n", num);
        return 0;
    }

    for (divisor = 2; divisor < num; divisor++) {
        if (num % divisor == 0) {
            printf("%d nao é primo.\n", num);
            return 0;
        }
    }

    printf("%d é primo!\n", num);
    
    return 0;
}
