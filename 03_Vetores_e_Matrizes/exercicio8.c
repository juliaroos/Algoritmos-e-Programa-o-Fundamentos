/* Comparação de Strings: Escreva um programa que leia duas palavras. 
O programa deve verificar se as duas palavras são idênticas (caractere por caractere),
sem usar a função strcmp. Imprima "Iguais" ou "Diferentes".*/


#include <stdio.h>
#include <string.h>

int main()
{   
    
    char palavra1[100], palavra2[100]; 
    
    printf("Escreva uma palavra: ");
    fgets(palavra1, 100, stdin);
    
    printf("Escreva outra palavra: ");
    fgets(palavra2, 100, stdin);
    
    size_t tamanho1 = strlen(palavra1);
    size_t tamanho2 = strlen(palavra2);
    
    int maior = tamanho1;
    if (tamanho2 > tamanho1)
        maior = tamanho2; 
    
    
    int diferença = 0;
    for (int i = 0; i < maior; i++){
        if (palavra1[i] != palavra2[i]){
            diferença = 1;
            printf("Diferentes");
            break;
        }
    }
    
    if (diferença == 0) {
        printf("Iguais.");
    }
        

    return 0;
}
