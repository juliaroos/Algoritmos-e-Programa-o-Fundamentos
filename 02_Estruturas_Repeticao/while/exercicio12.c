#include <stdio.h>
#include <math.h>


int main()
{
       int numP = 0, soma = 0, cont = 0;
       
       printf ("Escreva números positivos, e quando desejar o resultado da média deles, digite um número negativo: ");
       scanf ("%d", &numP);
       
       while (numP >= 0) {
            soma += numP;
            cont++;
            scanf("%d", &numP);
       }
       
       int media = soma / cont;
       
       printf ("A média dos números positivos é de: %d", media);
    return 0;
}
