#include <stdio.h>

int main() {
    int x, k;
    int result;

    scanf("%d %d", &x, &k);
    
    result = x;
    for (int i = 0; i < k; i++) {
        if (result % 10 == 0) {
            result = result / 10;
        } else {
            result = result - 1;
        }   
    }

    printf("%d", result);

    return 0;
}