#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    //  Nhập chuỗi từ bàn phím
    printf("Nhap noi dung: ");
    fgets(text, sizeof(text), stdin);

    //  Mở file để ghi
    f = fopen("D:\\Test\\bai2.txt", "w");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    //  Ghi vào file
    fprintf(f, "%s", text);

    //  Đóng file
    fclose(f);

    printf("Ghi file thanh cong!\n");

    return 0;
}