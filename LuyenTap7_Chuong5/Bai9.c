#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Nhập chuỗi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Nhập ký tự
    printf("Nhap ky tu can tim: ");
    scanf("%c", &ch);

    // Đếm số lần xuất hiện
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // In kết quả
    printf("Ky tu '%c' xuat hien %d lan", ch, count);

    return 0;
}