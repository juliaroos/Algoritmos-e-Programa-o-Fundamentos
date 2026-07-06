#include <stdio.h>
#include <math.h>


int main()
{
       int num, cont, mult = 1;
       
       printf ("Digite um valor positivo: ");
       scanf ("%d", &num);
       
       while (num < 0){
           printf("[ERRO] Informe um valor positivo: ");
           scanf ("%d", &num);
       }
       
       for (cont = 1; cont <= num; cont++) {
            mult = mult * cont;
       }
       
       printf ("O fatorial de %d é de: %d", num, mult);
    return 0;
}
