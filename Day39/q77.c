/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        int min_dim = (r < c) ? r : c;
        int distinct = 1;
        for (int i = 0; i < min_dim; i++) {
            for (int j = i + 1; j < min_dim; j++) {
                if (mat[i][i] == mat[j][j]) {
                    distinct = 0;
                    break;
                }
            }
            if (!distinct) break;
        }
        printf("%s\n", distinct ? "True" : "False");
    }
    return 0;
}
