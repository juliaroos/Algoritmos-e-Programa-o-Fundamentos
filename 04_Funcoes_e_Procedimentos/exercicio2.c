#include <stdio.h>

char calcularConceito(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3.0;

    if (media <= 4.0) return 'D';
    if (media <= 7.0) return 'C';
    if (media <= 9.0) return 'B';
    return 'A'; 
}

int main() {
    float nota1, nota2, nota3;

    do {
        printf("Digite as 3 notas (entre 0 e 10): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
    } while (nota1 < 0 || nota1 > 10 || 
             nota2 < 0 || nota2 > 10 || 
             nota3 < 0 || nota3 > 10);

    char conceito = calcularConceito(nota1, nota2, nota3);
    printf("Conceito: %c\n", conceito);

    return 0;
}
