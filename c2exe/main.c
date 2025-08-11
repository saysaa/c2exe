#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main() {
    printf("c2exe - Easy compiler for C\n");
    printf("-----------------------------\n");
    Sleep(1000);
    char console[100];
    char filename[100];
    char outputname[100];

    printf("1. Compile 'exemple.c' - Type: 'compile'\n");

    while (1) {
        printf(">>");
        scanf("%99s", console);
        if (strcmp(console, "compile") == 0) {
            printf("compile selected\n");
            Sleep(2000);

            printf("Enter '.c' file: ");
            scanf("%s", filename);

            printf("Enter '.exe' save file: ");
            scanf("%s", outputname);

            sprintf(console, "gcc %s -o %s", filename, outputname);
            printf("Compiling...\n");

            int result = system(console);

            if (result == 0) {
                printf("Compilation successful! Output: %s\n", outputname);
            } else {
                printf("Compilation failed :/\n");
            }
        }
    }
    return 0;
}