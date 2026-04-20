#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int A[rows][cols], B[cols][rows]; // chú ý kích thước đảo ngược

    // Nhập ma trận A
    printf("Nhap ma tran A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Tính chuyển vị
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            B[j][i] = A[i][j];
        }
    }

    // In ma trận chuyển vị
    printf("\nMa tran chuyen vi:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}