
// Q86: Check if a string is a palindrome.

#include <stdio.h>
int main() {
    
    char str[100], str2[100];
    int i, len = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str); 

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        str2[i] = str[len - 1 - i];
    }

    for(i = 0 ; i < len; i++){
        if(str[i] != str2[i]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}
