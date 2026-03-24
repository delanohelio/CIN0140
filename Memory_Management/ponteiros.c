#include <stdio.h>

int main() {
    int n = 10;
    int *p = &n; // p guarda o endereço de n

    printf("Valor de n: %d\n", n);
    printf("Endereco de n: %p\n", &n);
    printf("Valor do ponteiro p (endereco de n): %p\n", p);
    printf("Conteudo apontado por p: %d\n", *p); // Desreferenciação

    *p = 20; // Modificando n através de p
    printf("Novo valor de n: %d\n", n);

    return 0;
}
