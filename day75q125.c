/* Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content. */

#include <stdio.h>
int main() {

    FILE *file;
    char filename[100];
    char text[200];

    printf("Enter existing file name: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if(file == NULL){
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    getchar(); 

    printf("Enter text to append: ");
    gets(text);

    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    fclose(file);

    return 0;
}