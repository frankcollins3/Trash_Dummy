#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *trash, *newfile, *digtrash;
    char ch;

    printf("test print:\t  found some pie. \n");

    trash = fopen("./test.txt", "r");
    if (trash == NULL) {
        printf("Failed to open file\n");
        return 1;
    } else {
        // printf("trash is not equal to null. pretty cool\n");

        // while ((ch = fgetc(trash)) != EOF) {
        //     printf("%c", ch);
        // }

        // fclose(trash);
    }

    // newfile = fopen("test2.txt", "w");
    // if (newfile == NULL) {
    //     printf("Failed to open file for writing\n");
    //     return 1;
    // } 

    char *home_dir = (char *) getenv("HOME");
if (home_dir == NULL) {
    printf("we're homeless guys\n");
} else {
    printf("home sweet home: %s\n", home_dir);
}

    // digtrash = fopen("~./Trash", "r");
    // digtrash = fopen("~./Trash", "r");
    // digtrash = fopen("/Users/medium/trash", "r");
    // digtrash = fopen("/Users/medium/Desktop/testtrash2.txt", "w");
    // if (digtrash == NULL) {
    //     printf("wow what garbage");
    // } else {
    //     printf("theres some stuff id like you to look at");
    // }

    return 0;
}
