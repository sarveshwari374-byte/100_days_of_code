/* Q143: Find and print the student with the highest marks. */

#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    int marks;
};

int main(){
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++){
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    for(i = 1; i < n; i++){
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}