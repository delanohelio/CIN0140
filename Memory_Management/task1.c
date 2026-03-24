#include <stdio.h>

int main() {
    int notas[100];
    int i = 0;
    int nota;
    float soma = 0.0;
    int contador_nota_igual = 1;
    int maior_sequencia_igual = 1;

    scanf("%d", &nota);
    while (nota != -1) {
        if (nota >= 0 && nota <= 10) {
            notas[i] = nota;
            soma += nota;
            if (i > 0 && nota == notas[i - 1]) {
                contador_nota_igual++;
            } else {

                if (contador_nota_igual > maior_sequencia_igual) {
                    maior_sequencia_igual = contador_nota_igual;
                }

                contador_nota_igual = 1;
            }
            i++;
        } 
    }

    if (contador_nota_igual > maior_sequencia_igual){
        maior_sequencia_igual = contador_nota_igual;
    }

    for (int i_invertido = i - 1; i_invertido >= 0; i_invertido--){
        printf("%d ", notas[i_invertido]);
    }

    printf("quantidade: %d\n", i);
    printf("media: %.2f\n", soma / i);
    printf("maior_sequencia_igual: %d\n", maior_sequencia_igual);

    return 0;
}