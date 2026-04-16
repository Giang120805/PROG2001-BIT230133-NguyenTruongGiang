#include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem");
        }
        else {
            printf("Phuong trinh vo nghiem");
        }
    }
    else {
        x = -b / a;
        printf("Nghiem cua phuong trinh la x = %.2f", x);
    }

    return 0;
}