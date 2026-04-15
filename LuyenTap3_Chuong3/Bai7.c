#include <stdio.h>

int main() {
    float a, b;

    // Nhập 2 số
    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap so b: ");
    scanf("%f", &b);

    // Kiểm tra lỗi chia cho 0
    if (b == 0) {
        printf("Loi: Khong the chia cho 0!\n");
    } else {
        float result = a / b;
        printf("Ket qua a / b = %.2f\n", result);
    }

    return 0;
}