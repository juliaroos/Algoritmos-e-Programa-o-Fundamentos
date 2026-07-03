#include <stdio.h>
#include <math.h>

int main()
{
    double IMC, peso, altura;
    printf ("Olá! Por favor digite seu peso e sua altura: ");
    scanf ("%lf %lf", &peso, &altura);
    
    if (peso < 0 || altura < 0 || altura > 2.70 || peso > 700)
    printf ("Número inserido inválido");
    else {
    
    IMC = peso / (altura * altura);
    
    if (IMC < 18.5)
    printf ("Seu IMC é de %.2f, você está abaixo do peso", IMC);
    
    else if (IMC >= 18.5 && IMC < 25) 
    printf ("Seu IMC é de %.2f, você está com o peso normal", IMC);
    
    else if (IMC >= 25 && IMC < 30) 
    printf ("Seu IMC é de %.2f, você está com pré obesidade", IMC);
    
    else if (IMC >= 30 && IMC < 35) 
    printf ("Seu IMC é de %.2f, você está com obesidade grau 1", IMC);
    
    else if (IMC >= 35 && IMC < 40) 
    printf ("Seu IMC é de %.2f, você está com obesidade grau 2", IMC);
    
    else 
     printf ("Seu IMC é de %.2f, você está com obesidade grau 3", IMC);
}
    return 0;
}
