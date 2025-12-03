/* Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached. */

#include<stdio.h>
int main(){
    
    FILE *fp;
    char ch;

    fp = fopen("info.txt", "r");

    if(fp == NULL){
        printf("Error: Unable to open file!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}