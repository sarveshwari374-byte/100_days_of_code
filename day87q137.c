/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */

#include<stdio.h>
#include<string.h>

enum Role{ADMIN, USER, GUEST};

int main(){
    enum Role r;
    char input[20];
    printf("Enter the user (GUEST, ADMIN, USER): ");
    gets(input);
    
    if(strcmp(input, "ADMIN") == 0){
        r = ADMIN;
    }else if(strcmp(input, "USER") == 0){
        r = USER;
    }else{
        r = GUEST;
    }
    
    
    if(r == ADMIN){
        printf("Welcome Admin!\n");
    }else if(r == USER){
        printf("Welcome User!\n");
    }else{
        printf("Welcome Guest!\n");
    }
    
    return 0;
}