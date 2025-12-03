/* Q142: Store details of 5 students in an array of structures and print all. */

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student s[5];
    int i;
    printf("Enter details of 5 students:\n\n");
    
    for(i = 0; i < 5; i++){
        printf("Student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name); 

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-----------------------------------------------\n");

    for(i = 0; i < 5; i++){
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}