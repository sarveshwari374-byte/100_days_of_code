// Q82: Print each character of a string on a new line.

#include <stdio.h>
int main() {
    
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  

    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}