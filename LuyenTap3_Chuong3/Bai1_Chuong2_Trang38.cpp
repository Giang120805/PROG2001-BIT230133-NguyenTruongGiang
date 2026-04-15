#include <string.h>
#include <stdio.h>

int main () {
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    return 0;
}