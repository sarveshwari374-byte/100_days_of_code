/* Q128: Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters. */

#include <stdio.h>
int main() {

    FILE *fp;
    char filename[50];
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch=='a' || ch=='A' ||
                ch=='e' || ch=='E' ||
                ch=='i' || ch=='I' ||
                ch=='o' || ch=='O' ||
                ch=='u' || ch=='U'){
                vowels++;
            }else{
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}