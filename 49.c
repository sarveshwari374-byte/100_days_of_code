/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main() {
    int r = 5;

    for (int i = 1; i <= r; i++) {
        int s = r - i + 1;  
        for (int j = s; j <= r; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
