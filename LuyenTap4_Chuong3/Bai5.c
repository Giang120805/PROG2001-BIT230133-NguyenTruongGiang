#include <stdio.h>

int main() {
    int n, reversed = 0, digit;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;          // Lấy chữ số cuối
        reversed = reversed * 10 + digit; // Thêm vào số đảo
        n = n / 10;              // Bỏ chữ số cuối
    }

    printf("So dao nguoc la: %d", reversed);

    return 0;
}