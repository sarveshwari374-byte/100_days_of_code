// Q83: Count vowels and consonants in a string.

#include<stdio.h>
int main(){
    
    int vowel = 0 , consonant = 0;
    char str[100];
    printf("Enter a character in a string = ");
    scanf("%s",str);

    for(int i = 0; str[i] != '\0'; i++) {
        if( (str [i] >= 'a' && str[i] <= 'z') || (str [i] >= 'A' && str[i] <= 'Z')){  
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                vowel++;
            }else{
                consonant++;
            }
        }
    }

    printf("Vowels = %d , Consonants = %d.",vowel,consonant);
    
    return 0;
}