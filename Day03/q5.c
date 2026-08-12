/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    double celsius;
    if (scanf("%lf", &celsius) == 1) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Fahrenheit=%g\n", fahrenheit);
    }
    return 0;
}
