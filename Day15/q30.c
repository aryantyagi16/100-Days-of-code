/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int rev = 0;
        int is_negative = 0;
        if (n < 0) {
            is_negative = 1;
            n = -n;
        }
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (is_negative) {
            rev = -rev;
        }
        printf("%d\n", rev);
    }
    return 0;
}
