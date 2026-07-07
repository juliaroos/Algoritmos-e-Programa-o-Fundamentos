/* Soma de Vetores: Escreva um programa que leia dois arrays de 5 posições cada.
Em seguida, crie um terceiro array que contenha a soma dos elementos de mesma posição 
dos dois arrays anteriores. Imprima o array resultante. */


#include <stdio.h>

int main()
{   
    
    double num1[5]; 
    double num2[5];
    
    printf("Escreva 5 números reais: ");
    
    for (int i = 0; i < 5; i++)
    scanf("%lf", &num1[i]);
    
    printf("Escreva mais 5 números reais: ");
    
    for (int i = 0; i < 5; i++)
    scanf("%lf", &num2[i]);
    
    double soma = 0.0;
    for (int i = 0; i < 5; i++){
        soma = num1[i] + num2[i];
        printf("%.2f + %.2f = %.2f \n", num1[i], num2[i], soma); 
    }

    return 0;
}
