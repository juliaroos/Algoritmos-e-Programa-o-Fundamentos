
#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    printf("Insira 3 valores inteiros: ");
    scanf ("%d %d %d", &A, &B, &C);
    
    int menor = A;

    if (B < menor)
       menor = B;
    if (C < menor)
       menor = C;

    printf("O menor numero é: %d\n", menor);

    return 0;
}
