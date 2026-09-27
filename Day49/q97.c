/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int new_word = 1;
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] == ' ') {
                new_word = 1;
            } else if (new_word) {
                printf("%c.", toupper(s[i]));
                new_word = 0;
            }
        }
        putchar('\n');
    }
    return 0;
}
