#include <stdio.h>

int main() {
    FILE *trash, *newfile;
    char ch;

    printf("test print:\t  found some pie. \n");

    trash = fopen("./test.txt", "r");
    if (trash == NULL) {
        printf("Failed to open file\n");
        return 1;
    } else {
        printf("trash is not equal to null. pretty cool\n");

        while ((ch = fgetc(trash)) != EOF) {
            printf("%c", ch);
        }

        fclose(trash);
    }

    newfile = fopen("test2.txt", "w");
    if (newfile == NULL) {
        printf("Failed to open file for writing\n");
        return 1;
    } 

    return 0;
}
