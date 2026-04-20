#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự '\n' nếu có
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    // Đảo chuỗi
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    printf("Chuoi sau khi dao: %s", str);

    return 0;
}