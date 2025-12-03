/* Q140: Define a struct with enum Gender and print person's gender. */

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

typedef enum{MALE, FEMALE} Gender;

typedef struct{
    Gender gender;
} Person;

int main(){
    Person person1;
    person1.gender = MALE;

    if(person1.gender == MALE){
        printf("Male\n");
    }else if(person1.gender == FEMALE){
        printf("Female\n");
    }else{
        printf("Unknown\n");
    }

    return 0;
}