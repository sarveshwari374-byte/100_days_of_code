// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main() {
    
    char sentence[200];
    int i, start, end;
    
    printf("Enter a sentence: ");
    gets(sentence);

    i = 0;
    while (sentence[i] != '\0') {
        while (sentence[i] == ' ' && sentence[i] != '\0') i++;
        start = i;
        while (sentence[i] != ' ' && sentence[i] != '\0') i++;
        end = i - 1;

        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
    }

    printf("Output: %s\n", sentence);
    return 0;
}