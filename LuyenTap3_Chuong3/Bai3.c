#include <stdio.h>

int main() {
    int x = 10; // Biến x bên ngoài

    printf("Gia tri x ben ngoai block = %d\n", x);

    // Khối lệnh bên trong
    {
        int x = 20; // Biến x mới (che biến x bên ngoài)

        printf("Gia tri x ben trong block = %d\n", x);
    }
    
    return 0;
}