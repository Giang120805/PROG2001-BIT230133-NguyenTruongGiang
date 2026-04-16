#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b: ");
    scanf("%d", &b);

    printf("Nhap so c: ");
    scanf("%d", &c);

    // Giả sử a là nhỏ nhất
    min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    printf("Gia tri nho nhat la: %d", min);

    return 0;
}