//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);            
    first = num / (int)pow(10, digits); 

    middle = num % (int)pow(10, digits);  
    middle = middle / 10;                 

    swappedNum = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}