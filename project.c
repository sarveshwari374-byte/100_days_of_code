#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    int id;
    char name[50];
    float price;
    int available;
};

void addCar();
void displayCars();
void rentCar();
void returnCar();

int main() {
    int choice;
    do {
        printf("\n===== CAR RENTAL SYSTEM =====\n");
        printf("1. Add Car\n");
        printf("2. Display Available Cars\n");
        printf("3. Rent a Car\n");
        printf("4. Return a Car\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();  // Clear leftover newline

        switch(choice) {
            case 1: addCar(); break;
            case 2: displayCars(); break;
            case 3: rentCar(); break;
            case 4: returnCar(); break;
            case 5: printf("Thank you!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}

void addCar() {
    FILE *fp = fopen("cars.txt", "a");
    if(!fp) { 
        printf("File Error!\n"); 
        return; 
    }

    struct Car c;

    printf("Enter Car ID: ");
    scanf("%d", &c.id);
    getchar();  // clear newline

    printf("Enter Car Name: ");
    fgets(c.name, sizeof(c.name), stdin);
    c.name[strcspn(c.name, "\n")] = '\0';  // remove newline

    printf("Enter Price per Day: ");
    scanf("%f", &c.price);

    c.available = 1;

    fprintf(fp, "%d|%s|%.2f|%d\n", c.id, c.name, c.price, c.available);
    fclose(fp);

    printf("Car added successfully!\n");
}

void displayCars() {
    FILE *fp = fopen("cars.txt", "r");
    if(!fp) { 
        printf("No Car Data Found!\n"); 
        return; 
    }

    struct Car c;+
    printf("\nID\tName\t\t\tPrice\n");
    printf("---------------------------------------------\n");

    while(fscanf(fp, "%d|%49[^|]|%f|%d\n", &c.id, c.name, &c.price, &c.available) == 4) {
        if(c.available == 1)
            printf("%d\t%-20s\t%.2f\n", c.id, c.name, c.price);
    }

    fclose(fp);
}

void rentCar() {
    FILE *fp = fopen("cars.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if(!fp || !temp) {
        printf("File Error!\n");
        return;
    }

    struct Car c;
    int id, found = 0;

    printf("Enter Car ID to Rent: ");
    scanf("%d", &id);

    while(fscanf(fp, "%d|%49[^|]|%f|%d\n", &c.id, c.name, &c.price, &c.available) == 4) {
        if(c.id == id && c.available == 1) {
            c.available = 0;
            found = 1;
            printf("You rented '%s' successfully!\n", c.name);
        }
        fprintf(temp, "%d|%s|%.2f|%d\n", c.id, c.name, c.price, c.available);
    }

    fclose(fp);
    fclose(temp);
    remove("cars.txt");
    rename("temp.txt", "cars.txt");

    if(!found) 
        printf("Car Not Available / Wrong ID!\n");
}

void returnCar() {
    FILE *fp = fopen("cars.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if(!fp || !temp) {
        printf("File Error!\n");
        return;
    }

    struct Car c;
    int id, found = 0;

    printf("Enter Car ID to Return: ");
    scanf("%d", &id);

    while(fscanf(fp, "%d|%49[^|]|%f|%d\n", &c.id, c.name, &c.price, &c.available) == 4) {
        if(c.id == id && c.available == 0) {
            c.available = 1;
            found = 1;
            printf("Car returned successfully!\n");
        }
        fprintf(temp, "%d|%s|%.2f|%d\n", c.id, c.name, c.price, c.available);
    }

    fclose(fp);
    fclose(temp);
    remove("cars.txt");
    rename("temp.txt", "cars.txt");

    if(!found) 
        printf("Invalid Return / Car already available!\n");
}