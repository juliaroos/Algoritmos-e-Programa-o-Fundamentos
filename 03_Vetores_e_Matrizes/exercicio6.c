/* Matriz Identidade: Escreva um programa que crie e imprima uma matriz identidade 5x5
(uma matriz onde todos os elementos da diagonal principal são 1 e os demais são 0).*/

#include <stdio.h>

int main()
{   
    
    int num[5][5]; 
    
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                num[i][j] = 1;
            }
            else num[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
