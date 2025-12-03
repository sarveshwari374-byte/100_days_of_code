/* Q109: Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k. */

#include <stdio.h>
int main() {
    
    int n, k, i, max_sum = 0, window_sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n || k <= 0){
        printf("Invalid value of k\n");
        return 0;
    }

    for(i = 0; i < k; i++){
        window_sum += arr[i];
    }

    max_sum = window_sum;

    for(i = k; i < n; i++){
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);
    return 0;
}