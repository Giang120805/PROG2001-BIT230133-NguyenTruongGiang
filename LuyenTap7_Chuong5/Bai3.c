#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Đảo mảng
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // In mảng sau khi đảo
    printf("Mang sau khi dao: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}