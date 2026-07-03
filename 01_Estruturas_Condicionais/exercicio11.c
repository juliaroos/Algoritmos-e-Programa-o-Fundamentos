#include <stdio.h>
#include <math.h>

int main()
{
    double preço, total, desconto, valorfinal;
    int  quantidade;
    printf("Insira o preço do produto: ");
    scanf ("%lf", &preço); 
    printf("Insira a quantidade de produtos: ");
    scanf ("%d", &quantidade); 
    
    total = preço * quantidade;
    
    if (quantidade == 3 || quantidade == 4)
        desconto = total * (10.0 / 100);
    else if (quantidade >= 5 && quantidade <= 10)
        desconto = total * (15.0 / 100);
    else if (quantidade > 10)
        desconto = total * (20.0 / 100);
    else 
        desconto = 0;
        
    valorfinal = total - desconto;    
    if (preço > 0 || quantidade > 0)
    (printf ("O valor total será de R$%.2f", valorfinal));
    else 
    printf ("ERRO: O valor inserido é inválido.");
    
    return 0;
}
