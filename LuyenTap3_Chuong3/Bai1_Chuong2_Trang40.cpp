#include <ctype.h>
#include <stdio.h>

int main () {
    char c = 'a';
    if (isalpha(c)) {
        printf("'c' is a letter.\n", c);
    }

    return 0;
}