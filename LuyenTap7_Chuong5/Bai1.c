#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Tính tổng
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Tong cac phan tu = %d", sum);
    return 0;
}