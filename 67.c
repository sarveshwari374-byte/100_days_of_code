/* Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include <stdio.h>

int main() 
{
    int n, arr[100], pos, elem, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &elem);

    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i-1];
    }

    n++;  
    arr[pos] = elem;
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}