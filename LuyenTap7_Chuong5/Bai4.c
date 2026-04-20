#include <stdio.h>

// Hàm tìm kiếm
int timKiem(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Trả về vị trí tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

int main() {
    int n, x;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int index = timKiem(arr, n, x);

    if (index != -1) {
        printf("Tim thay tai vi tri index = %d", index);
    } else {
        printf("Khong tim thay!");
    }

    return 0;
}