#include <stdio.h>

void trocaValores(int *a, int *b){
     
    int newA;
    newA = *a; 
    *a = *b;
    *b = newA;

}

int main()
{
    int x = 3, y = 7; 
    
    printf("Antes da troca:\n");
    printf("x = %d, y = %d\n", x, y);

    trocaValores(&x, &y); 

    printf("\nDepois da troca:\n");
    printf("x = %d, y = %d\n", x, y);


    return 0;
}
