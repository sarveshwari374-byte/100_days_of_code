/* Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, second_largest;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second_largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    printf("%d", second_largest);

    return 0;
}
