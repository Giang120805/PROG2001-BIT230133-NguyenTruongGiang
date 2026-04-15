#include <stdio.h>

// Không static
void incrementNormal() {
    int counter = 0;
    counter++;
    printf("Normal counter = %d\n", counter);
}

// Static
void incrementStatic() {
    static int counter = 0;
    counter++;
    printf("Static counter = %d\n", counter);
}

int main() {

    printf("Khong static:\n");
    incrementNormal();
    incrementNormal();
    incrementNormal();

    printf("\nDung static:\n");
    incrementStatic();
    incrementStatic();
    incrementStatic();

    return 0;
}