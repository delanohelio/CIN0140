#include <stdio.h>

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ponteiro = array + 2;
    printf("%d\n", *ponteiro);

    *ponteiro = 20;
    printf("%d\n", array[2]);

    return 0;
}