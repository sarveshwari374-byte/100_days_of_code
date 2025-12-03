/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main() {
    int r = 5, c = 5;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}