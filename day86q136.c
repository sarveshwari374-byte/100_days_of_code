/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */

#include<stdio.h>
#include<string.h>

enum Menu{ADD, SUBTRACT, MULTIPLY};

int main(){
    enum Menu choice;
    char op[20];
    int a, b;

    printf("Enter operation and two numbers: ");  
    scanf("%s %d %d", op, &a, &b);

    if(strcmp(op, "ADD") == 0){
        choice = ADD;
    }else if(strcmp(op, "SUBTRACT") == 0){
        choice = SUBTRACT;
    }else{
        choice = MULTIPLY;
    }
    
    switch(choice){
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}