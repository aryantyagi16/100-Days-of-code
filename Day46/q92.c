/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int seen[26] = {0};
        char found = '\0';
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                int idx = s[i] - 'a';
                if (seen[idx]) {
                    found = s[i];
                    break;
                }
                seen[idx] = 1;
            }
        }
        if (found != '\0') {
            printf("%c\n", found);
        } else {
            printf("None\n");
        }
    }
    return 0;
}
