/* Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record. */

#include <stdio.h>
int main() {

    FILE *fp;
    char name[50];
    int roll, marks;
    int n;

    fp = fopen("students.txt", "w");
    if(fp == NULL){
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("How many student records you want to store? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL){
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3){
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}