//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h>

double calculateBill(int units) {
    double bill = 0.0;
    
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 6.0) + ((units - 100) * 7.0);
    } else {
        bill = (100 * 9.0) + (100 * 8.0) + ((units - 200) * 10.0);
    }
    
    return bill;
}

int main() {
    int units_consumed;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units_consumed);
    
    if (units_consumed < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1;
    }
    double final_bill = calculateBill(units_consumed);
      printf("Bill: $%.2f\n", final_bill);
    
    return 0;
}