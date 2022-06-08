#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_num(char* s) {
    int index = 0;

    while(s[index] != '\0') {
        index++;
    }

    return index;
}

char* concat_directory(char* parent, char* child) {
    int num = string_num(parent) + string_num(child) + 4;
    char * direct = (char*) calloc(num, sizeof(char));;
    strcat(direct, parent);
    strcat(direct, "/");
    strcat(direct, child);

    return direct;
}
