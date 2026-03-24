#include <stdio.h>

int main() {

    int nota = 10;
    int *ponteiro = &nota;

    *ponteiro = 9;

    printf("Valor da nota: %d\n", nota);
    printf("Valor do ponteiro: %d\n", *ponteiro);

}