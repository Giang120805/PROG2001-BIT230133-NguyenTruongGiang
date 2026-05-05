#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int soLe = 2 * i - 1;
        sum += soLe;
    }

    printf("Tong %d so le dau tien = %d", n, sum);

    return 0;
}