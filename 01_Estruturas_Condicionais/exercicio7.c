#include <stdio.h>
#include <math.h>

int main()
{
    float opcao, num1, num2, resultado;
    printf ("BEM VINDO À CALCULADORA!!!!!!!!!\n");
    printf("Digite 1 para somar dois valores\n");
    printf("Digite 2 para subtrair dois valores\n");
    printf("Digite 3 para multiplicar dois valores\n");
    printf("Digite 4 para dividir dois valores\n");
    printf("Digite 5 para realizar uma potência entre dois valores\n");
    printf("Digite 6 para realizar uma radiciação entre dois valores\n");
    printf("Digite qualquer outro número para sair\n");
    
    printf ("\nEscolha uma opção: ");
    scanf ("%f", &opcao);
    
    if (opcao >= 1 && opcao <= 6) {
    printf ("Digite o primeiro valor: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo valor: ");
    scanf ("%f", &num2);
    }
    else 
    printf ("CALCULADORA ENCERRADA");
    
    if (opcao == 1) {
    resultado = num1 + num2;
    printf ("O resultado é: %.2f", resultado);
    } 
    else if (opcao == 2) {
    resultado = num1 - num2;
    printf ("O resultado é: %.2f", resultado);
    } 
    else if (opcao == 3) {
    resultado = num1 * num2;
    printf ("O resultado é: %.2f", resultado);
    } 
    else if (opcao == 4) {
        if (num2 != 0){
    resultado = num1 / num2;
    printf ("O resultado é: %.2f", resultado);
    } 
    else 
    printf ("Erro: Divisão por 0");
    }
    else if (opcao == 5) {
    resultado = pow(num1, num2);
    printf ("O resultado é: %.2f", resultado);
    }
    else if (opcao == 6) {
        
        if (num2 != 0)
            resultado = pow(num1, 1.0/num2);
        else
            printf("Erro: raiz de ordem zero!");
        printf("O resultado é: %.2f", resultado);
    }

    return 0;
}
