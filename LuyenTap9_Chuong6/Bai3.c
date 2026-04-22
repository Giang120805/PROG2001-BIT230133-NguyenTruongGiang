#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    //  Mở file để đọc
    f = fopen("D:\\Test\\bai2.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    //  Đọc nội dung file và in ra màn hình
    printf("Noi dung file:\n");

    while (fgets(text, sizeof(text), f) != NULL) {
        printf("%s", text);
    }

    //  Đóng file
    fclose(f);

    return 0;
}