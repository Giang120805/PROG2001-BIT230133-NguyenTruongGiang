#include <stdio.h>

// hàm đệ quy
int tongBinhPhuong(int n) {
    if (n == 1) {
        return 1; // điều kiện dừng
    }
    return n * n + tongBinhPhuong(n - 1);
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n khong hop le!");
        return 0;
    }

    int ketQua = tongBinhPhuong(n);

    printf("Tong S = 1^2 + 2^2 + ... + %d^2 = %d", n, ketQua);

    return 0;
}