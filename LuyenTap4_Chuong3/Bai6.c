#include <stdio.h>

int main() {
    int n = 1;

    do {
        if (n % 3 == 0 && n % 7 == 0) {
            printf("So dau tien chia het cho ca 3 va 7 la: %d", n);
            break;
        }
        n++;
    }
    while (1);

    return 0;
}