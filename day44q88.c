// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
    
    char str[200];
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '-';
        }
    }
    
    printf("The string is: ");
    puts(str);
    
    return 0;
}