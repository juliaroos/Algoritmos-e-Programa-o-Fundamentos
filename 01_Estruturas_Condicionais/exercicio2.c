
#include <stdio.h>
#include <math.h>

int main()
{
    float A, B;
    printf("Insira o dividendo: ");
    scanf ("%f", &A);
    printf("Insira o divisor: ");
    scanf ("%f", &B);
    
    float resultado = A / B; 
    
    if (B == 0)
    printf ("NÃO FOI POSSÍVEL REALIZAR A OPERAÇÃO. ERRO: divisor igual a ZERO");
    else
    printf ("O resultado da divisão é: %0.1f", resultado); 

    return 0;
}
