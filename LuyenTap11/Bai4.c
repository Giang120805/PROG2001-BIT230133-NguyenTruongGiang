#include <stdio.h>

int main() {
    int n;
    int laSoNguyenTo = 1; // giả sử ban đầu là số nguyên tố

    printf("Nhap N: ");
    scanf("%d", &n);

    // kiểm tra điều kiện
    if (n < 2) {
        laSoNguyenTo = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                laSoNguyenTo = 0;
                break; // tìm thấy ước số → không cần kiểm tra nữa
            }
        }
    }

    // in kết quả
    if (laSoNguyenTo) {
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }

    return 0;
}