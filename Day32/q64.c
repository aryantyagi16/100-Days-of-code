/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    char s[100];
    if (scanf("%99s", s) == 1) {
        int count[10] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                count[s[i] - '0']++;
            }
        }
        int max_count = -1;
        int best_digit = 0;
        for (int d = 0; d <= 9; d++) {
            if (count[d] > max_count) {
                max_count = count[d];
                best_digit = d;
            }
        }
        printf("%d\n", best_digit);
    }
    return 0;
}
