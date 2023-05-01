#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

int main () {

    FILE *trash;
    char ch;
    
    printf("test print:\t  found some pie. \n");

    trash = fopen("./test.txt", "r");

    if (trash == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    while ((ch = fgetc(trash)) != EOF) {
        printf("%c", ch);
    }

    fclose(trash);

    return 0;
}
