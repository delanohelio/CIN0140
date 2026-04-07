#include <stdio.h>
#include <stdlib.h>

int main() {

    int **matriz = (int **)calloc(5, sizeof(int *));

    for (int i = 0; i < 5; i++) {
        matriz[i] = malloc(5 * sizeof(int));
    }

    for (int i = 0; i < 5; i++) {
        int *row = matriz[i];
        scanf("%d %d %d %d %d", &row[0], &row[1], &row[2], &row[3], &row[4]);
    }

    int row_1, column_1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (matriz[i][j] == 1) {
                row_1 = i;
                column_1 = j;
            }

        }
    }
    int moves = 0;

    if (row_1 != 2) {

        if (row_1 > 2) {
            moves = moves + (row_1 - 2);
        } else {
            moves = moves + (2 - row_1);
        }

    }

    if (column_1 != 2)
    {

        if (column_1 > 2)
        {
            moves = moves + (column_1 - 2);
        }
        else
        {
            moves = moves + (2 - column_1);
        }
    }

    printf("%d", moves);
    return 0;
}