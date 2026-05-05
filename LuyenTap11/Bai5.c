#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n khong hop le!");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Tong S = 1^2 + 2^2 + ... + %d^2 = %d", n, sum);

    return 0;
}