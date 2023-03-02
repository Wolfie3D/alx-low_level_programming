#include "main.h"
#include "stdio.h"



char *rot13(char *str) {
    char *result = str;
    int len = 0;
    while (*str++) len++;
    str -= len + 1;
    for (int i = 0; i < len; i++) {
        if (*str >= 'a' && *str <= 'z') {
            *str = (*str - 'a' + 13) % 26 + 'a';
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = (*str - 'A' + 13) % 26 + 'A';
        }
        str++;
    }
    return result;
}
