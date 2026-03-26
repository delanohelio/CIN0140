#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante
{
    char nome[100];
    int nota;
};


int main() {
    int total_notas;
    printf("Quantas notas? ");
    scanf("%d", &total_notas);

    int *notas = (int *)calloc(total_notas, sizeof(int));

    for (int i = 0; i < total_notas; i++) {
        printf("\nNota %d: ", i+1);
        scanf("%d", &notas[i]);
    }

    int soma = 0;
    for (int i = 0; i < total_notas; i++) {
        soma = soma + notas[i];
    }
    float media = soma / total_notas;
    printf("\nA média é: %.2f", media);

    free(notas);
}