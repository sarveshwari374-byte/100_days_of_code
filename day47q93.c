// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int found;

    printf("Enter string 1 = ");
    scanf("%s", str1);
    printf("Enter string 2 = ");
    scanf("%s", str2);

    while (str1[len1] != '\0'){
        len1++;
    }
    while (str2[len2] != '\0'){
        len2++;
    }

    if (len1 != len2) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        found = 0; 
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '0'; 
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}