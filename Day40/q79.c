/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        int first = 1;
        for (int d = 0; d < r + c - 1; d++) {
            if (d % 2 == 0) {
                int row = (d < r) ? d : r - 1;
                int col = d - row;
                while (row >= 0 && col < c) {
                    if (!first) printf(" ");
                    printf("%d", mat[row][col]);
                    first = 0;
                    row--;
                    col++;
                }
            } else {
                int col = (d < c) ? d : c - 1;
                int row = d - col;
                while (col >= 0 && row < r) {
                    if (!first) printf(" ");
                    printf("%d", mat[row][col]);
                    first = 0;
                    row++;
                    col--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
