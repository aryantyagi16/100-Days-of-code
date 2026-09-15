/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int row_sums[100];
        for (int i = 0; i < r; i++) {
            row_sums[i] = 0;
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                row_sums[i] += val;
            }
        }
        for (int i = 0; i < r; i++) {
            printf("%d%s", row_sums[i], (i == r - 1) ? "" : " ");
        }
        printf("\n");
    }
    return 0;
}
