#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    // mv  ~/.Trash alias ----> desktop
    char *home_dir = (char *) getenv("HOME");
if (home_dir == NULL) {
    printf("we're homeless guys\n");
} else {
    printf("home sweet home: %s\n", home_dir);
    strcat(home_dir, "/Trash");
    printf("updated directory:\t %s", home_dir);
    digtrash = fopen("/Users/medium/.Trash", "r");
    if (digtrash == NULL) { 
        printf("-____- garbage -____-");
    } else {
        printf("<3 TRASH!!!! <3");
        for (int i = 0; i < sizeof(digtrash); i++) {
            printf("my files:\t %s \n", digtrash[i]);
        }
    }
}
    // cmnd shift . -------> command shift period into the terminal to show the hidden files.

    // digtrash = fopen("~./Trash", "r");
    // digtrash = fopen("~./Trash", "r");
    // digtrash = fopen("/Users/medium/Desktop/testtrash2.txt", "w");
    // if (digtrash == NULL) {
    //     printf("wow what garbage");
    // } else {
    //     printf("theres some stuff id like you to look at");
    // }

    return 0;
}