#include <stdio.h>

int globalVar = 100; // Global variabal with file scope

void display() {
    printf("Global Variabal = %d\n", globalVar);
}

int main() {
    printf("Global Variabal = %d\n", globalVar);
    display();
    return 0;
}