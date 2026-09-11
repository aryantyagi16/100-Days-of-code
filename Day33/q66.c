/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1001];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int val;
        if (scanf("%d", &val) == 1) {
            int i = n - 1;
            while (i >= 0 && arr[i] > val) {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = val;
            n++;
            for (int j = 0; j < n; j++) {
                printf("%d%s", arr[j], (j == n - 1) ? "" : " ");
            }
            printf("\n");
        }
    }
    return 0;
}
