#include <stdio.h>
#include <string.h>

    int main()
    {
        int *itemp;
        *itemp = 35;
        printf("%d\n", *itemp);
        *itemp = 2 * (*itemp);
        printf("%d\n", *itemp);
        return 0;
    }