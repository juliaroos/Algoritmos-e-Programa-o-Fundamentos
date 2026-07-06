#include <stdio.h>

int main()
{
    int numA = 0, cont; 
    for (cont = 0; cont < 10; cont++){
        char letra;
        printf ("Escreva uma letra: ");
        scanf (" %c", &letra);
        if (letra == 'A' || letra == 'a')
        numA++;
    }
    
    printf("\n Quantidade de A/a: %d\n", numA);

    return 0;
}
