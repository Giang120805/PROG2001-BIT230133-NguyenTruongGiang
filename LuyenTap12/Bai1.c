#include <stdio.h>

int main() {
    int a, b, n;
    int sum = 0;

    printf("Nhap a, b, n: ");
    scanf("%d %d %d", &a, &b, &n);

    if (a >= n || b >= n || a <= 0 || b <= 0 || n <= 0) {
        printf("Du lieu khong hop le!");
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            sum += i;
        }
    }

    printf("Tong = %d", sum);
    return 0;
}