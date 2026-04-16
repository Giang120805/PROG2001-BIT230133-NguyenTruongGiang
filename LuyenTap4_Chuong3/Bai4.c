#include <stdio.h>

int main() {
    int n, i;
    int S = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra n hợp lệ
    if (n <= 0) {
        printf("n phai la so nguyen duong");
    }
    else {
        for (i = 1; i <= n; i++) {
            S = S + i;
        }

        printf("Tong S = %d", S);
    }

    return 0;
}