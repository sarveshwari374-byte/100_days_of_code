// Q95: Check if one string is a rotation of another.

#include <stdio.h>
int main() {
    
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, match, found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1] != '\0') len1++;

    while(str2[len2] != '\0') len2++;

    if(len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    for(i = 0; i < len1; i++) {      
        match = 1;
        for(j = 0; j < len1; j++) {
            if(str1[(i + j) % len1] != str2[j]) {
                match = 0;
                break;
            }
        }
        if(match) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}