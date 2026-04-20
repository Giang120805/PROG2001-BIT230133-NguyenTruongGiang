#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // Giả sử phần tử đầu tiên là lớn nhất
    int max = arr[0];
    int index = 0;
    // Duyệt tìm max
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("Gia tri lon nhat = %d\n", max);
    printf("Vi tri (index) = %d", index);
    return 0;
}