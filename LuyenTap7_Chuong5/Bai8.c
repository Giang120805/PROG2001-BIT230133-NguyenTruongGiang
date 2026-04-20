#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin); // nhập cả khoảng trắng

    printf("Chuoi vua nhap: %s", str);

    int length = strlen(str); // tính độ dài

    printf("Do dai chuoi = %d", length);

    return 0;
}