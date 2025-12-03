/* Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char num[100];
    int freq[10] = {0};  
    int max_freq = 0;
    int max_digit = 0;

    scanf("%s", num);

    for(int i = 0; num[i] != '\0'; i++) 
    {
        freq[num[i] - '0']++;
    }

    for(int i = 0; i < 10; i++) 
    {
        if(freq[i] > max_freq) 
        {
            max_freq = freq[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);

    return 0;
}