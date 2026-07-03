#include <stdio.h>
#include <math.h>


int main()
{
       int num, cont = 1, mult = 1;
       
       printf ("Digite um valor positivo: ");
       scanf ("%d", &num);
       
       while (num < 0){
           printf("[ERRO] Informe um valor positivo: ");
           scanf ("%d", &num);
       }
       
       while (cont <= num) {
            mult = mult * cont;
            cont++;
       }
       
       printf ("O fatorial de %d é de: %d", num, mult);
    return 0;
}
