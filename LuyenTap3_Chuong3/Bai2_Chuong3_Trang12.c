#include <stdio.h>

void increment() {
    static int counter = 0; // Retains value across function calls
    counter++;
    printf("Counter = %d\n", counter);
}

int main() {
    increment();
    increment();
    increment();
    return 0;
}