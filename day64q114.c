/* Q114: Write a program to take a string s as input. 
The task is to find the length of the longest substring without repeating characters. Print the length as output. */

#include <stdio.h>
#include <string.h>
int main() {

    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int longest = 0; 

    for(int i = 0; i < n; i++){
        int seen[256] = {0};  
        int currentLength = 0;
        for(int j = i; j < n; j++){
            int index = s[j];
            if(seen[index] == 1){
                break;
            }
            seen[index] = 1;
            currentLength++;
            if(currentLength > longest){
                longest = currentLength;
            }
        }   
    }

    printf("The length of the longest substring without repeating characters is: %d\n", longest);

    return 0;
}