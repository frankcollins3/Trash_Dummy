#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

    #define MAX_FILE_CHAR 256

int main() {
    FILE *trash, *newfile, *digtrash;
    char ch;

    printf("test print:\t  found some pie. \n");


    trash = fopen("./test.txt", "r");
    if (trash == NULL) {
        printf("Failed to open file\n");
        return 1;
    } else {
        printf("nothing");
    }

    // newfile = fopen("test2.txt", "w");
    // if (newfile == NULL) {
    //     printf("Failed to open file for writing\n");
    //     return 1;
    // } 

    // mv  ~/.Trash alias ----> desktop
//     char *home_dir = (char *) getenv("HOME");
// if (home_dir == NULL) {
//     printf("we're homeless guys\n");
// } else {
//     printf("home sweet home: %s\n", home_dir);
//     strcat(home_dir, "/Trash");
//     printf("updated directory:\t %s", home_dir);
//     digtrash = fopen("/Users/medium/.Trash", "r");
//     if (digtrash == NULL) { 
//         printf("-____- garbage -____-");
//     } else {
//         printf("<3 TRASH!!!! <3");
//         for (int i = 0; i < sizeof(digtrash); i++) {
//             printf("my files:\t %s \n", digtrash[i]);
//         }
//     }
// }

char *home_dir = getenv("HOME");
if (home_dir == NULL) {
    printf("we're homeless guys\n");
} else {
    printf("home sweet home: %s\n", home_dir);
    char trash_dir[100];
    sprintf(trash_dir, "%s/.Trash", home_dir);
    printf("updated directory:\t %s\n", trash_dir);
    DIR *dir = opendir(trash_dir);
    if (dir == NULL) { 
        printf("-____- garbage -____-\n");
    } else {
        printf("<3 TRASH!!!! <3\n");
        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL) {
            // char my_file[MAX_FILE_CHAR] = entry->d_name; 
            char first_char = entry->d_name[0]; 
            if (first_char != '.') {  // skip hidden files
            
                // if (strcmp(entry->d_name, "sure.txt")) {
                //     printf("%s \n", entry->d_name);
                //     // printf("lets see \n");
                //     remove(entry->d_name);
                // }

                char trash_dir[100];
                sprintf(trash_dir, "%s/.Trash", home_dir);
                char file_path[256];
                sprintf(file_path, "%s/%s", trash_dir, "you.txt");
                if (unlink(file_path) == 0) {
                    printf("file deleted:\t %s \n", file_path);  
                    break;          
                } else {

                    printf("nada: %s \n", file_path);
                }

            }
        }
        closedir(dir);
    }
}

    return 0;
}

