/* Q116: Write a program to take an integer array nums which contains only positive integers, 
and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that
 nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. 
 Print the two indices separated by a space as output. If no solution exists, print "-1 -1". */
 
#include <stdio.h>
int main() {

    int n, target, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int nums[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
    }
    
    if(found == 0){
        printf("-1 -1\n");
    }
    
    return 0;
}