/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    int n = sizeof(stars) / sizeof(stars[0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < stars[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
