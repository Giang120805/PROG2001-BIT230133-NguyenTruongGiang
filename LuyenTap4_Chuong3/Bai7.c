#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap mot so trong khoang 1-100: ");
        scanf("%d", &n);

        if (n < 1 || n > 100) {
            printf("So khong hop le! Vui long nhap lai.\n");
        }

    } while (n < 1 || n > 100);

    printf("Ban da nhap dung so trong khoang 1-100.");

    return 0;
}