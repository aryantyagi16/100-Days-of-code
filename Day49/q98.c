/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char words[20][100];
        int count = 0;
        int wlen = 0;
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] == ' ') {
                if (wlen > 0) {
                    words[count][wlen] = '\0';
                    count++;
                    wlen = 0;
                }
            } else {
                words[count][wlen++] = s[i];
            }
        }
        if (wlen > 0) {
            words[count][wlen] = '\0';
            count++;
        }
        if (count > 0) {
            for (int i = 0; i < count - 1; i++) {
                printf("%c.", toupper(words[i][0]));
            }
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    return 0;
}
