/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char ch;
        if (scanf(" %c", &ch) == 1) {
            int count = 0;
            for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
                if (s[i] == ch) {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}
