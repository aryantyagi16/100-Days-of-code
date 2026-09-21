/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int len = 0;
        while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') {
            len++;
        }
        int is_pal = 1;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                is_pal = 0;
                break;
            }
        }
        if (is_pal) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}
