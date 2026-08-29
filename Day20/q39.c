/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    char s[64];
    if (scanf("%63s", s) == 1) {
        int prod = 1;
        int has_odd = 0;
        int odds[64];
        int count = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int d = s[i] - '0';
                if (d % 2 != 0) {
                    prod *= d;
                    has_odd = 1;
                    odds[count++] = d;
                }
            }
        }
        if (has_odd) {
            printf("%d (", prod);
            for (int i = 0; i < count; i++) {
                printf("%d%s", odds[i], (i + 1 < count) ? "*" : "");
            }
            printf(")\n");
        } else {
            printf("1 (no odd digits, assume 1)\n");
        }
    }
    return 0;
}
