/* Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().*/

#include <stdio.h>
int main() {

    FILE *src, *dest;
    char srcFile[100], destFile[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    if(src == NULL){
        printf("Cannot open source file %s\n", srcFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if(dest == NULL){
        printf("Cannot open destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    while((ch = fgetc(src)) != EOF){
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);


    fclose(src);
    fclose(dest);

    return 0;
}