#include <stdio.h>

int main()
{
    int i;
    int S = 0, C = 0, D = 0, V = 0;
    char estado;
    
    for (int i = 1; i <= 20; i++){
        printf ("Digite o estado civil (S, C, D, V): ");
        scanf (" %c", &estado);
        
        if (estado == 'S' || estado == 's'){
            S++; 
        }
        else if (estado == 'C' || estado == 'c'){
            C++; 
        }
        else if (estado == 'D' || estado == 'd'){
            D++; 
        }
        else if (estado == 'V' || estado == 'v'){
            V++; 
        }
    }
    
    printf("\nRESULTADOS:\n");
    printf("Solteiros: %d \n", S);
    printf("Casados: %d \n", C);
    printf("Divorciados: %d \n", D);
    printf("Viúvos: %d \n", V);
    
    return 0;
}
