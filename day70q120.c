/* Q120: Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
int main() {
 
    char str[200];
    printf("Enter a string: ");
    gets(str);  

    int i = 0;
    int newWord = 1;  
    while(str[i] != '\0'){
        if(str[i] == ' '){
            newWord = 1;  
        }else{
            if(newWord && str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;  
                newWord = 0;
            }else if(!newWord && str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;  
            }else{
                newWord = 0;  
            }
        }
        i++;
    }

    printf("Sentence Case: %s\n", str);
    return 0;
}