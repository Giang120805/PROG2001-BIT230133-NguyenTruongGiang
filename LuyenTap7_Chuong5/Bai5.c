#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Nhập ma trận
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In ma trận
    printf("\nMa tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]); // format đẹp
        }
        printf("\n"); // xuống dòng sau mỗi hàng
    }

    return 0;
}