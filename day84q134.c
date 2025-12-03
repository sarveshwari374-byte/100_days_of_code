/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */

#include<stdio.h>
#include<string.h>

enum Status{SUCCESS, FAILURE, TIMEOUT};

int main(){
    enum Status s;
    char input[20];
    printf("Enter the status: ");
    gets(input);

    if(strcmp(input, "SUCCESS") == 0){
        s = SUCCESS;
    }else if(strcmp(input, "FAILURE") == 0){
        s = FAILURE;
    }else if(strcmp(input, "TIMEOUT") == 0){
        s = TIMEOUT;
    }else{
        printf("Invalid input!\n");
        return 0;
    }

    if(s == SUCCESS){
        printf("Operation successful\n");
    }else if(s == FAILURE){
        printf("Operation failed\n");
    }else{
        printf("Operation timed out\n");
    }
    
    return 0;
}